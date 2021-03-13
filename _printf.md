#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 *
 *
 *
 *
 *
 */

/* First tree*/
/* printf function*/
/* arg first found*/
/*possible extra sorting function*/

/*tree 2*/
/*more modifiers?*/
/*another sorting function*/
/*format functions that return formatted string*/

/*tree 3*/
/*no more modifiers?*/
/*does, does not fit in buffer?*/
/*print write buffer and reset index*/
/*add to write buffer */
/*print buffer and free*/

void _printf(char* form, ...)
{

char *iterator;
unsigned int i;
char*x;
va_list arg;

va_start(arg, form);
for(iterator = form; *iterator != 00; iterator++)
{

while( *iterator != '%')
{

putchar(*iterator);
iterator++;
}

iterator++;


switch(*iterator)
{

case 'c' : i = va_arg(arg,int);
putchar(i);
break;

case 'd' : i = va_arg(arg,int);
if(i<0)
{
{

i = -i;
putchar('-');
}

puts(convert(i,10));
break;

case 'o': i = va_arg(arg,unsigned int);
puts(convert(i,8));
break;

case 's': s = va_arg(arg,char *);
puts(s);
break;

case 'x': i = va_arg(arg,unsigned int);
puts(convert(i,16));
break;
}
}

va_end(arg);
}

/**
 *
 *
 *
 */

char *convert(unsigned int num, int base)
{ 
static char carray[]= "0123456789ABCDEF";
static char buffer[50];
char *ptr;
ptr = &buffer[49];
*ptr = '\0';
do
{

*--ptr = carray[num%base];
num /= base;

}

while(num != 0); 

return(ptr);
}
