#include "holberton.h"
#include <stdarg.h>

/**
 * c_string - returns a string
 * @args: list input
 * Return: the string
 */
char *c_string(va_list args)
{
	return(va_arg(args, char *));
}
