#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * _printf - Custom printf function
 * @format: format string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0;
	va_list list;

	type_format params[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_d},
		{"s", print_s},
		{NULL, NULL}
	};

}
