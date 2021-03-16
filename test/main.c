#include <stdio.h>
#include <limits.h>
#include "holberton.h"
int main()
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;


	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("Character:[%c]\n", 'h');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Negative d:[%d]\n", -1111762534);
	printf("Negative d:[%d]\n", -1111762534);
	_printf("Negative i:[%i]\n", -74);
	printf("Negative i:[%i]\n", -74);
	_printf("Positive i, d: [%i], [%d]\n", 74, 74);
	_printf("Binary b: [%b]\n", 98);
	_printf("Binary b: [%b]\n", 4294967295);
	_printf("Binary b: [%b]\n", 13);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Rotw31ler:[%R]\n", "Rotw31ler");
	_printf("Bass-ackward:[%r]\n", "Bass-ackward");
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("%S\n", "Holberton\nSchool\n");
	printf("Address:[%p]\n", addr);
	len = _printf("Let's try to printf a simple sentence.\n");
        len2 = printf("Let's try to printf a simple sentence.\n");
        _printf("Length:[%d, %i]\n", len, len);
        _printf("Length:[%d, %i]\n", len2, len2);
	_printf("");
	_printf("Unknown:[%w]test\n");
	printf("Unknown:[%w]test\n");
	_printf("backslash:\\");
	putchar('\n');
	printf("backslash:\\");
	putchar('\n');
	len = _printf("percent: %");
	puts("");
	len2 = printf("percent: %");
	puts("");
	_printf("Length:[%d, %i]\n", len, len);
        _printf("Length:[%d, %i]\n", len2, len2);
	len = _printf("%");
        puts("");
	len2 = printf("%");
        puts("");
        _printf("Length:[%d, %i]\n", len, len);
        _printf("Length:[%d, %i]\n", len2, len2);
	printf("%d, %s\n", 2, "String and number");
	_printf("%d, %s\n", 2, "String and number");
	printf("%+done\n", 1);
        _printf("%+done\n", 1);
        printf("%+dword\n", 1);
        _printf("%+dword\n", 1);
	_printf("%0-3d\n", 3);
 	_printf("% s\n", "space");
 	_printf("%  s\n", "too many space");
	len = _printf("");
	len2 = printf("");
	_printf("Length:[%d, %i]\n", len, len);
        printf("Length:[%d, %i]\n", len2, len2);
	printf("Maths: %d\n", 2 + 2);
	_printf("Maths: %d\n", 2 + 2);
	printf("%d, %i, %o, %b, %x, %X, %u\n", 16, 16, 16, 16, 16, 16, 16);
		printf("%s, %c, %p\n", "sixteen", 'c', addr);
		_printf("%d, %i, %o, %b, %x, %X, %u\n", 16, 16, 16, 16, 16, 16, 16);
		_printf("%s, %S, %c\n", "sixteen", "six\nteen", 'c');
		_printf("%r\n", "sixteen");
		_printf("%R\n", "sixteen");
/*		_printf("%p\n", addr);
 *		_printf("%r, %R, %p\n", "sixteen", "sixteen", addr);
 *
 *	_printf("Unknown:[%r]test\n");
 *      printf("Unknown:[%r]test\n");
 *	_printf("%s\n");
 *	printf("%s\n", 'h');
 *	_printf("%s\n", 'h');
 *      _printf("%\n", "hello");*/
	return (0);
}
