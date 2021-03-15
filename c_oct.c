#include "holberton.h"

/**
 * c_oct - converts an octal into a string
 * @args: list input
 * Return: converted string
 */
char *c_oct(va_list args)
{
	char *s = malloc(sizeof(char) * 16);
	int i = 0, ri, check = 0;
	char tmp;
	unsigned int n = va_arg(args, unsigned int);

	s[i] = 00;
	for (i++; n != 0; n /= 8, i++)
		s[i] = (n % 8) + 48;
	i--;
	if (check == 1)
		s[++i] = '-';
	for (ri = 0; ri <= i; ri++, i--)
	{
		tmp = s[ri];
		s[ri] = s[i];
		s[i] = tmp;
	}
	return (s);
}
