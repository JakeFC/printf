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
		return (NULL);
	sm = malloc(sizeof(s));
	_strcpy(sm, s);
	return (sm);
}
