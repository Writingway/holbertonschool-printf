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
	void (*fptr)(va_list);
} type_format;

int _putchar(char c);
int _printf(const char *format, ...);

void print_c(va_list list);
void print_i(va_list list);
void print_d(va_list list);
void print_s(va_list list);


#endif
