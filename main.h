#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>

/**
 * struct type_print - Struct type
 *
 * @name: The operator
 * @fptr: The function associated
 */
typedef struct type_print
{
	char *name;
	int (*fptr)(va_list);
} type_format;

int _putchar(char c);
int _printf(const char *format, ...);

int print_c(va_list list);
int print_i(va_list list);
int print_d(va_list list);
int print_s(va_list list);

//int (*get_handler_func(char *s))(int, int);

#endif
