#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_c - print character
 * @list: name of the person
 * Return: Division.
 */
int print_c(va_list list)
{
	char c = va_arg(list, int);

	_putchar(c);
	return (c);
}
/**
 * print_i - print integer
 * @list: name of the person
 * Return: Division.
 */
int print_i(va_list list)
{
	_putchar(va_arg(list, int));
}
/**
 * print_d - print float
 * @list: name of the person
 * Return: Division.
 */
int print_d(va_list list)
{
	_putchar(va_arg(list, int));
}
/**
 * print_s - print string
 * @list: name of the person
 * Return: Division.
 */
int print_s(va_list list)
{
	char *str = va_arg(list, char *);
	int i = 0;

	if (str == NULL)
		str = "(nil)";

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
