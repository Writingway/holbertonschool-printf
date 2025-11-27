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
 * print_integer - print integer
 * @list: list
 * Return: compteur
 */
int print_integer(va_list list)
{
	int n = va_arg(list, int);
	int compteur = 0;
	long num = n;

	if (num < 0)
	{
		compteur += _putchar('-');
		num = -num;
	}

	compteur += print_integer_recursive(num);

	return (compteur);
}

/**
 * print_integer_recursive - print integer recursive
 * @n: n
 * Return: compteur
 */
int print_integer_recursive(long n)
{
	int compteur = 0;

	if (n / 10)
	{
		compteur += print_integer_recursive(n / 10);
	}

	compteur += _putchar((n % 10) + '0');
	return (compteur);
}
