#include "holberton.h"

/**
 * c_r - returns a string
 * @args: list input
 * Return: the string
 */
char *c_r(va_list args)
{
char *s = va_arg(args, char *);
char *sm = malloc(sizeof(s));

_strcpy(sm, s);
rev_string(sm);
return(sm);
}

/**
 * _strlen - return the length of the string
 *@s: the length of the string
 *
 * Return: the length(x)
 */
int _strlen(char *s)
{
int x;
x = 0;
while (*(s + x) != '\0')
{
x++;
}
return (x);
}

/**
 * rev_string - reverses a string
 * @s: string input
 */
void rev_string(char *s)
{
	int a, b, c;

	a = 0;
	while (*(s + a) != '\0')
		a++;
	a--;
	b = 0;
	while (b <= a / 2)
	{
		c = s[b];
		s[b] = s[a - b];
		s[a - b] = c;
		b++;
	}

}
