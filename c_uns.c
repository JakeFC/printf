#include "holberton.h"

/**
 * c_uns - converts an unsigned int to string
 * @args: list input
 * Return: converted string
 */
char *c_uns(va_list args)
{
	char *s = malloc(sizeof(char) * 13);
	int i = 0, ri;
	char tmp;
	unsigned int n = va_arg(args, unsigned int);

	if (!s)
		return (NULL);
	s[i] = 00;
	if (n == 0)
		s[++i] = 48;
	for (i++; n != 0; n /= 10, i++)
		s[i] = (n % 10) + 48;
	i--;
	for (ri = 0; ri <= i; ri++, i--)
	{
		tmp = s[ri];
		s[ri] = s[i];
		s[i] = tmp;
	}
	return (s);
}
