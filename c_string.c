#include "holberton.h"

/**
 * *_strcpy - copies a string to another variable
 * @dest: destination variable
 * @src: string source
 */
void _strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
}
/**
 * c_string - returns a string
 * @args: list input
 * Return: the string
 */
char *c_string(va_list args)
{
	char *s = va_arg(args, char *);
	char *sm;

	if (!s)
	{
		_puts("(null)");
		return (NULL);
	}
	sm = malloc(sizeof(*s));
	if (!sm)
	{
		_puts("(null)");
		return (NULL);
	}
	_strcpy(sm, s);
	return (sm);
}
