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

int _numlen(int n)
{
	int len = 0;

	while (n / 10 != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char *print_i(va_list list)
{
	int digit = 0, i = 0;
	int divisor = 1000000000;
	char *output;
	/* char *char_output;*/
	int num = va_arg(list, int);
	int len = _numlen(num);

	output = malloc(len * sizeof(int));
	/* char_size = malloc(sizeof(char) * len);*/

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
	return (output);
}
