#include "holberton.h"

/**
 * c_percx - creates a string starting with %, including unknown specifiers
 * @fc: non-working format character input
 * Return: the string
 */
char *c_percx(char fc)
{
	char *s = malloc(sizeof(char) * 3);

	s[0] = '%';
	s[1] = fc;
	s[2] = 00;
	return (s);
}
