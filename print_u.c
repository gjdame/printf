#include <stdio.h>
#include <limits.h>
#include <stdarg.h>
#include "holberton.h"
#include <stdlib.h>

int _numlength(int n)
{
	int len = 0;

	while (n / 10 != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char *print_u(va_list list)
{
	int digit = 0, i = 0;
	int divisor = 1000000000;
	char *output;
	/*char *char_output;*/
	unsigned int num = va_arg(list, unsigned int);
	int len = _numlength(num);

	output = malloc(len * sizeof(char));
	/*char_size = malloc(sizeof(char) * len);*/
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
		digit = (num/divisor) % 10;
		if (digit != 0)
		{
			output[i] = digit + '0';
			i++;
		}
		divisor /= 10;
	}
	return (output);
}
