#include <stdio.h>
#include <stdlib.h>

void main()
{
	unsigned int a = 12;

	printf("%s", c_bin(a));
}
char *c_bin(unsigned int n)
{
	int i = 0, ri, tmp;
	char *s = malloc(sizeof(char) * 9);

	s[i] = 00;
	for (++i; n / 2 != 0; n /= 2, i++)
		s[i] = (n % 2) + 48;
	for (--i, ri = 0; ri <= i; ri++, i--)
	{
		tmp = s[ri];
		s[ri] = s[i];
		s[i] = tmp;
	}
	return (s);
}
