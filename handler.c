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

	_putchar(c);
	return (c);
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
		str = "nul";
	}

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
