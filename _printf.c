#include <unistd.h>
#include "holberton.h"

/**
 * _printf - prints a formatted string
 * format - string literal where format specifiers are found
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	c_t type[] = {
		{"c", c_char},
		{"s", c_string},
		{"i", c_int},
		{"d", c_int},
		{"b", c_bin},
		{NULL, NULL}
	};
	va_list args;
	int fi, ti, Ti, bi = 0, total = 0;
	char *tmp, *buf = malloc(sizeof(char) * 1024);

	va_start(args, format);
	for (fi = 0; format && format[fi]; fi++)
	{
		if (format[fi] == '%')
		{
			for (ti = 0; type[ti].t; ti++)
				if (format[fi + 1] == type[ti].t[0])
				{
					fi++;
					tmp = type[ti].f(args);
					continue;
				}
			if (format[fi + 1] == '%')
			{
				tmp = malloc(sizeof(char) * 2);
				tmp[0] = '%';
				tmp[1] = 00;
				fi++;
			}
		}
		else
			tmp = c_char2(format[fi]);
		if ((bi + sizeof(tmp)) > 1024)
		{
			write(1, buf, bi);
			bi = 0;
		}
		for (Ti = 0; tmp[Ti]; bi++, Ti++, total++)
			buf[bi] = tmp[Ti];
		free(tmp);
	}
	write(1, buf, bi);
	free(buf);
	va_end(args);
	return (total);
}
