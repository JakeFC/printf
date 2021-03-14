#include <stdio.h>
#include <limits.h>
#include "holberton.h"
int main()
{
	int len;
	int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("Character:[%c]\n", 'h');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Negative d:[%d]\n", -1111762534);
	printf("Negative d:[%d]\n", -1111762534);
	_printf("Negative i:[%i]\n", -74);
	printf("Negative i:[%i]\n", -74);
	_printf("Binary b: [%b]\n", 98);
	_printf("Binary b: [%b]\n", 4294967295);
	_printf("Binary b: [%b]\n", 13);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n", "Unknown");
	len = _printf("Let's try to printf a simple sentence.\n");
        len2 = printf("Let's try to printf a simple sentence.\n");
        _printf("Length:[%d, %i]\n", len, len);
        printf("Length:[%d, %i]\n", len2, len2);
	return (0);
}
