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

	d = "0, 1, 2, 3, 4, 5, 6, 7, 8, 9, :, ;, <, =, >, ?";
	h = "0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F";
        s[i] = 00;
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
