#include "holberton.h"

/**
 * c_r - returns a string
 * @args: list input
 * Return: the string
 */
char *c_r(va_list args)
{
int len;
char *s = va_arg(args, char *);
char *sm = malloc(sizeof(s));
char tmp;
int i;
int j;
sm = _strcpy(sm, s);
len = _strlen(sm);
for (i = 0, j = (len - 1); i < j; j--, i++)
{
tmp = sm[i];
sm[i] = sm[j];
sm[j] = tmp;
}
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
