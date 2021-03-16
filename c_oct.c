#include "holberton.h"

/**
 * c_oct - converts an octal into a string
 * @args: list input
 * Return: converted string
 */
char *c_oct(va_list args)
{
	char *s = malloc(sizeof(char) * 16);
	int i = 0, ri;
	char tmp;
	unsigned int n = va_arg(args, unsigned int);

	if (!s)
		return (NULL);
	s[i] = 00;
	if (n == 0)
		s[++i] = 48;
	for (i++; n != 0; n /= 8, i++)
		s[i] = (n % 8) + 48;
	i--;
	for (ri = 0; ri <= i; ri++, i--)
	{
		tmp = s[ri];
		s[ri] = s[i];
		s[i] = tmp;
	}
	return (s);
}
