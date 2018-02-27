#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

char *print_bin(va_list list)
{
	unsigned int n = va_arg(list, unsigned int);
	char s[1024];
	char *b;
	int i;

	b = s;
	i = 0;
	while (n != 0)
	{
	s[i] = (n % 2) + '0';
	i++;
	n = n / 2;
	}
	rev_string(s);

	return (b);
}
