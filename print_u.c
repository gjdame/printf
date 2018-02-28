#include <stdio.h>
#include <limits.h>
#include <stdarg.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * print_u - print unsigned int
 * @list: va_list
 * Return: string
 *
 */
char *print_u(va_list list)
{
	int digit = 0, i = 0;
	int divisor = 1000000000;
	char *output;
	unsigned int num = va_arg(list, unsigned int);
	int len = _numlen(num);

	output = malloc(sizeof(char) * len + 1);

	if (output == NULL)
	{
		free(output);
		return (0);
	}

	if (num < 10)
	{
		output[i] = num + '0';
		return (output);
	}

	while (divisor)
	{
		digit = (num / divisor) % 10;
		if (digit != 0 || (len >= 0 && output[i - 1] >= '0'))
		{
			output[i] = digit + '0';
			i++;
			len--;
		}
		divisor /= 10;
	}
	output[i] = '\0';
	return (output);
}
