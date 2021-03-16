#include "holberton.h"

/**
 * c_int - converts an int to a string
 * @args: argument list
 * Return: converted string
 */
char *c_int(va_list args)
{
	char *s = malloc(sizeof(char) * 13);
	int i = 0, ri, check = 0, on = va_arg(args, int);
	char tmp;
	long int n;

	if (!s)
		return (NULL);
	if (on < 0)
	{
		check = 1;
		n = -on;
	}
	else
		n = on;
	s[i] = 00;
	if (n == 0)
		s[++i] = 48;
	for (i++; n != 0; n /= 10, i++)
		s[i] = (n % 10) + 48;
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
