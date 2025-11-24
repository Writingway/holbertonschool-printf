#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_c - print character
 * @list: name of the person
 * Return: Division.
 */
void print_c(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * print_i - print integer
 * @list: name of the person
 * Return: Division.
 */
void print_i(va_list list)
{
	printf("%i", va_arg(list, int));
}
/**
 * print_d - print float
 * @list: name of the person
 * Return: Division.
 */
void print_d(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * print_s - print string
 * @list: name of the person
 * Return: Division.
 */
void print_s(va_list list)
{
	char *str = va_arg(list, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
