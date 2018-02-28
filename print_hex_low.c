#include "holberton.h"
/**
 * print_hex_low - print hexadecimal from decimal
 * @list: list
 * Return: pointer to string
 */

char *print_hex_low(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	char output[1024];
	char *out_ptr;
	int i = 0;
	int tmp;

	out_ptr = output;
	if (num == 0)
	{
		output[0] = '0';
		output[1] = '\0';
		return (out_ptr);
		}

	while (num != 0)
	{
		tmp = 0;
		tmp = num % 16;

		if (tmp < 10)
		{
			output[i] = tmp + 48;
			i++;
		}
		else
		{
			output[i] = tmp + 87;
			i++;
		}

		num = num / 16;
	}

	rev_string(output);
	output[i] = '\0';

	return (out_ptr);
}
