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
	int fi = 0, Ti, bi = 0, total = 0;
	char *tmp, *buf = malloc(sizeof(char) * 1024);

/* Ti (tmp index, Fi (format index), bi (buffer index)*/
	if (!buf)
		return (-1);
	va_start(args, format);
	if (!format)
	{
		cleanup(buf, args, bi);
		free(buf);
		return (-1);
	}
	for (fi = 0; format[fi]; fi++)
	{
		if (format[fi] == '%')
		{
			tmp = c_sort(format, &fi, args);
			if (!tmp)
			{
				cleanup(buf, args, bi);
				free(buf);
				return (-1);
			}
		}
/*(to malloc and then free every string) -Line 47: prt buf, frees arg lsts*/
		else
			tmp = c_char2(format[fi]);
		for (Ti = 0; tmp[Ti]; bi++, Ti++, total++)
		{
			buf[bi] = tmp[Ti];
			if (bi == 1024)
				write(1, buf, bi), bi = -1;
		}
		free(tmp);
	}
	cleanup(buf, args, bi);
	free(buf);
	return (total);
}
/**
 * cleanup - writes the buffer and ends the va_list
 * @buf: buffer pointer
 * @args: va list
 * @bi: current buffer index
 * description: because betty
 */
void cleanup(char *buf, va_list args, int bi)
{
	write(1, buf, bi);
	va_end(args);
}
