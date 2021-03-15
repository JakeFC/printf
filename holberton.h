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
char *c_perc(va_list args);
char *c_char2(char c);
char *c_char(va_list args);
void rot13(char *s);
char *c_string(va_list args);
char *c_int(va_list args);
char *c_bin(va_list args);
void _strcpy(char *dest, char *src);
void _strcpyx(char *dest, char *src);
int _strlen(char *s);
char *c_r(va_list args);
char *c_rot(va_list args);
void rev_string(char *s);
char *c_uns(va_list args);
char *c_oct(va_list args);
char *c_hex(va_list args);
char *c_HEX(va_list args);
char *c_strung(va_list args);
char *c_hexcel(int n);
char *c_ptr(va_list args);
/*
 * char *c_sort(char c, va_list args);
 */

#endif
