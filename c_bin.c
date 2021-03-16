#include "holberton.h"

/**
 * c_bin - converts a binary number to string
 * @args: list input
 * Return: converted string
 */
char *c_bin(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int i = 0, ri, tmp;
	char *s = malloc(sizeof(char) * 1024);

		s[i] = 00;
		if (n == 0)
			s[++i] = 48;
		for (++i; n != 0; n /= 2, i++)
			s[i] = (n % 2) + 48;
		for (--i, ri = 0; ri <= i; ri++, i--)
		{
			tmp = s[ri];
			s[ri] = s[i];
			s[i] = tmp;
		}
		return (s);
}
