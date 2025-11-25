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
	int i = 0, count = 0, j = 0;
	va_list list;

	type_format params[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}};

	va_start(list, format);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			while (params[j].name)
			{
				if (*params[j].name == format[i])
				{
					count += params[j].fptr(list);
					break;
				}
				j++;
			}
			if (params[j].name == NULL)
			{
				_putchar('%');
				_putchar(format[i]);
				count += 2;
			}
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}
	_putchar('\n');
	return (count);
}
