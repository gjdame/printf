#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
/**
 * print_c - print char
 * @list: va_list
 * Return: string
 */
char *print_c(va_list list)
{
	static char s[2] = {0, '\0'};

	s[0] = va_arg(list, int);
	if (s[0] == '\0')
		return (" ");
	return (s);
}
/**
 * print_s - print string
 * @list: va_list
 * Return: string
 */
char *print_s(va_list list)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
		return (s = "(null)");
	return (s);
}
