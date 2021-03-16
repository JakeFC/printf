#include "holberton.h"

/**
 * _strcpyx - copies a string to another variable
 * @dest: destination variable
 * @src: string source
 */
void _strcpyx(char *dest, char *src)
{
	char *s;
	int a, b;

	for (b = 0, a = 0; src[a] != '\0'; a++, b++)
	{
		if ((src[a] < 32 && src[a] > 0) || src[a] >= 127)
		{
			dest[b++] = '\\';
			dest[b++] = 'x';
			s = c_hexcel(src[a]);
			dest[b++] = s[0];
			dest[b] = s[1];
			free(s);
		}
		else
			dest[b] = src[a];
	}
	dest[b] = '\0';
}
/**
 * c_strung - returns a string
 * @args: list input
 * Return: the string
 */
char *c_strung(va_list args)
{
	char *s = va_arg(args, char *);
	char *sm;

	if (!s)
		return (NULL);
	sm = malloc(sizeof(*s) * 4);
	if (!sm)
		return (NULL);
	_strcpyx(sm, s);
	return (sm);
}
/**
 * c_hexcel - converts an ascii value to a hex value in a string of 2 chars
 * @n: ascii value input
 * Return: converted string
 */
char *c_hexcel(int n)
{
	char *s = malloc(sizeof(char) * 3);
	char *d, *h;
	int ii, i = 0, ri;
	char tmp;

	d = "0123456789:;<=>?";
	h = "0123456789ABCEF";
	s[i] = 00;
	for (i++; i < 3; n /= 16, i++)
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
