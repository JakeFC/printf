#include "holberton.h"

/**
 * c_char - converts a char to string
 * @args: list input
 * Return: string
 */
char *c_char(va_list args)
{
	char *s;
	char c = va_arg(args, int);

	if (!c)
		return (NULL);
	s = malloc(sizeof(char) * 2);
	if (!s)
		return (NULL);
	s[0] = c;
	s[1] = 00;
	return (s);
}
