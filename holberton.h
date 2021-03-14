#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * struct c - pairs a format identifier with a conversion function
 * @t: format identifier
 * @f: string conversoin function
 */
typedef struct c
{
	char *t;
	char *(*f)(va_list args);
} c_t;
int _printf(const char *format, ...);
char *c_char2(char c);
char *c_char(va_list args);
char *c_string(va_list args);
char *c_int(va_list args);
/*
 * char *c_sort(char c, va_list args);
 */

#endif
