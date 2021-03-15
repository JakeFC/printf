#include "holberton.h"

/**
 * c_ptr - converts an address into a string
 * @args: list input
 * Return: converted string
 */
char *c_ptr(va_list args)
{
	char **pp = va_arg(args, void *);
	char *s = malloc(sizeof(char) * 510);

	_strcpy(s, (char *)pp);
	return (s);
}
