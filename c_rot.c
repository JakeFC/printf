#include "holberton.h"
#include <string.h>
/**
 * c_rot - Converts a string to rot 13
 * @args: list input
 * Return: the converted string
 */
char *c_rot(va_list args)
{

char *s = va_arg(args, char *);
char *sm = malloc(sizeof(*s));

if (!sm)
return (NULL);
_strcpy(sm, s);

rot13(sm);
return (sm);
}

/**
 * rot13 - encodes a string in rot13
 * @s: string input
 */
void rot13(char *s)
{
int a;

for (a = 0; s[a] != '\0'; a++)
{

if ((s[a] > 64 && s[a] < 91) || (s[a] > 96 && s[a] < 123))
{

if ((s[a] > 64 && s[a] < 78) || (s[a] > 96 && s[a] < 110))
s[a] = s[a] + 26;
s[a] = s[a] - 13;
}
}
}
