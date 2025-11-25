#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>

/**
 * _printf - Custom printf function
 * @format: format string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0, j;
	va_list list;

	type_format params[] = {
		{"c", print_c},
		{"i", print_i},
		{"d", print_d},
		{"s", print_s},
		{NULL, NULL}};

	va_start(list, format);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;
			while (params[j].name)
			{
				if (*params[j].name == format[i])
				{
					count += params[j].fptr(list);
					break;
				}
				j++;
			}
		}
		else
		{
			write(1, '%', 1);
			write(1, &format[i], 1);
		}
		i++;
	}
	_putchar('\n');
	return (count);
}
