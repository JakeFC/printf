#include "holberton.h"
#include <stdarg.h>

/**
 * c_char - converts a char to string
 * @args: list input
 * Return: string
 */
char *c_char(va_list args)
{
	char *s = malloc(sizeof(char) * 2);

	s[0] = (char)va_arg(args, int);
	s[1] = 00;
	return(s);
}
