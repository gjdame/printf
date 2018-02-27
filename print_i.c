#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
#include <stdlib.h>

int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}

char *print_i(va_list list)
{
	int digit = 0, i = 0;
	int divisor = 1000000000;
	char *output;
	int num = va_arg(list, int);
	int len = _numlen(num);

	output = malloc(len * sizeof(char) + 1);

	if (output == NULL)
	{
		free(output);
		return (0);
	}

	if (num < 0)
	{
		output[i] = '-';
		i++;
	}

	if (num > -10 && num < 10)
	{
		output[i] = _abs(num) + '0';
		return (output);
	}

	while (divisor)
	{
		digit = (num/divisor) % 10;
		if (num < 0)
		{
			digit = _abs(digit);
		}
		if (digit != 0)
		{
			output[i] = digit + '0';
			i++;
		}
		divisor /= 10;
	}
	output[i] = '\0';
	return (output);
}
