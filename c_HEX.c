#include "holberton.h"

/**
 * c_HEX - converts a number to a hex string
 * @args: list input
 * Return: converted string
 */
char *c_HEX(va_list args)
{
	char *s = malloc(sizeof(char) * 15);
	char *d, *h;
	int ii, i = 0, ri;
	char tmp;
	unsigned int n = va_arg(args, unsigned int);

	if (!s)
		return (NULL);
	d = "0123456789:;<=>?";
	h = "0123456789ABCDEF";
	s[i] = 00;
	if (n == 0)
		s[++i] = 48;
	for (i++; n != 0; n /= 16, i++)
	{
		s[i] = (n % 16) + 48;
		for (ii = 0; d[ii]; ii++)
			if (s[i] == d[ii])
			{
				s[i] = h[ii];
				break;
			}
	}
	i--;
	for (ri = 0; ri <= i; ri++, i--)
	{
		tmp = s[ri];
		s[ri] = s[i];
		s[i] = tmp;
	}
	return (s);
}
