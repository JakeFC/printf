#include "holberton.h"

/**
 * c_sort - pairs a conversion character with a conversion function and runs it
 * @fc: format character
 * @args: list input
 * Return: the converted function
 */
char *c_sort(char fc, va_list args)
{
	c_t type[] = {
		{"%", c_perc},
		{"c", c_char},
		{"s", c_string},
		{"i", c_int},
		{"d", c_int},
		{"b", c_bin},
		{"r", c_r},
		{"R", c_rot},
		{"u", c_uns},
		{"o", c_oct},
		{"x", c_hex},
		{"X", c_HEX},
		{"S", c_strung},
		{"p", c_ptr},
		{NULL, NULL}
	};
	int ti;
	char *tmp;

	for (ti = 0; type[ti].t; ti++)
		if (fc == type[ti].t[0])
		{
			tmp = type[ti].f(args);
			return (tmp);
		}
	return (c_percx(fc));
}
