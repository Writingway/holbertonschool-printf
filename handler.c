#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_percent - print percent
 * @args: list
 * Return: Division.
 */
int print_percent(va_list args)
{
	(void)args;
	return (_putchar('%'));
}
/**
 * print_char - print character
 * @list: list
 * Return: Division.
 */
int print_char(va_list list)
{
	char c = va_arg(list, int);
	int i = 1;

	_putchar(c);
	return (i);
}
/**
 * print_string - print string
 * @list: list
 * Return: jsp
 */
int print_string(va_list list)
{
	char *str = va_arg(list, char *);
	int i = 0;

	if (str == NULL)
	{
		str = "(null)";
	}

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
/**
 * print_percent - print float
 * @list: name of the person
 * Return: Division.
 */
int print_percent(va_list list)
{
	(void)list;
	return (_putchar('%'));
}