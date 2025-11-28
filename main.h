#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>

/**
 * struct type_print - structure for format types
 * @name: format type
 * @fptr: pointer to function
*/
typedef struct type_print
{
	char *name;
	int (*fptr)(va_list);
} type_format;

int _putchar(char c);
int _printf(const char *format, ...);

int print_char(va_list list);
int print_string(va_list list);
int print_percent(va_list args);
int print_integer(va_list list);
int print_integer_recursive(long n);

#endif
