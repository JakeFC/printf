#include "holberton.h"

/**
 * c_char2 - converts a char to a string
 * @c: char input
 * Return: converted string
 */
char *c_char2(char c)
{
	char *s = malloc(sizeof(char) * 2);

	s[0] = c;
	s[1] = 00;
	return (s);
}
