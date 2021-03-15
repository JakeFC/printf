#include <unistd.h>
#include "holberton.h"

/**
 * _printf - prints a formatted string
 * @format: string literal where format specifiers are found
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int fi, Ti, bi = 0, total = 0;
	char *tmp, *buf = malloc(sizeof(char) * 1024);

	va_start(args, format);
	if (!format)
	{
		cleanup(buf, args);
		return (-1);
	}
	for (fi = 0; format[fi]; fi++)
	{
		if (format[fi + 1] && format[fi] == '%')
		{
			tmp = c_sort(format[++fi], args);
			if (!tmp)
			{
				cleanup(buf, args);
				return (-1);
			}
		}
		else
			tmp = c_char2(format[fi]);
		for (Ti = 0; tmp[Ti]; bi++, Ti++, total++)
		{
			buf[bi] = tmp[Ti];
			if (bi == 1024)
			{
				write(1, buf, bi);
				bi = -1;
			}
		}
		free(tmp);
	}
	write(1, buf, bi);
	cleanup(buf, args);
	return (total);
}
/**
 * cleanup - frees the buffer and ends the va_list
 * @buf: buffer pointer
 * @args: va list
 * description: because betty
 */
void cleanup(char *buf, va_list args)
{
	free(buf);
	va_end(args);
}
