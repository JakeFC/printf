#include <stdio.h>
#include <limits.h>
#include "holberton.h"
int main()
{
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Negative d:[%d]\n", -1111762534);
	printf("Negative d:[%d]\n", -1111762534);
	_printf("Negative i:[%i]\n", -74);
	printf("Negative i:[%i]\n", -74);
	return (0);
}
