#include "holberton.h"

/**
 * c_perc - prints a % symbol
 * @args: completely ignored
 * Return: % as a string
 */
char *c_perc(va_list args)
{
	char *s;
	(void)args;

	s = malloc(sizeof(char) * 2);
	s[0] = '%';
	s[1] = 00;
	return (s);
}
