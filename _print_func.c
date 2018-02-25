#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
/**
 *
 *
 */
char *print_c (va_list list)
{
	char *s;
	s = va_arg(list, char *);
	return (s);
}

char *print_s(va_list list)
{
	char *s;
	s = va_arg(list, char *);
	return (s);
}

//char *print_i(va_list list)
//{
//	int i;
//	i = va_arg(list, int);
//	return (i);
//}

//char *print_d(va_list list)
//{
//	int i;
//	i = va_arg(list, int);
//	return (i);
//}
