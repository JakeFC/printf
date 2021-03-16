#include "holberton.h"

/**
 * c_sort - pairs a conversion character with a conversion function and runs it
 * @format: format string
 * @fi: format index address
 * @args: list input
 * Return: the converted function
 */
char *c_sort(const char *format, int *fi, va_list args)
{
	c_t type[] = {
		{"%", c_perc},
		{"c", c_char},
		{"s", c_string},
		{"i", c_int},
		{"d", c_int},
		{"b", c_bin},
		{"r", c_rev},
		{"R", c_rot},
		{"u", c_uns},
		{"o", c_oct},
		{"x", c_hex},
		{"X", c_HEX},
		{"S", c_strung},
		{"p", c_ptr},
		{NULL, NULL}
	};
	int ti, Fi, increments = 0;
	char *tmp, *flag = "+ #lh.0-123456789";
	char flagseen[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	*fi += 1;
	for (Fi = 0, increments = 0; flag[Fi] && format[*fi]; Fi++)
		if ((format[*fi] == flag[Fi]) && (flagseen[Fi] != '1'))
		{
			flagseen[Fi] = '1';
			*fi += 1;
			increments++;
			Fi = -1;
		}
	for (ti = 0; type[ti].t && format[*fi]; ti++)
		if (format[*fi] == type[ti].t[0])
		{
			tmp = type[ti].f(args);
			return (tmp);
		}
	*fi -= increments;
	if (format[*fi] && format[*fi + increments])
		return (c_percx(format[*fi]));
	return (NULL);
}
