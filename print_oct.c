#include "holberton.h"
/**
 * print_oct - print octal from decimal
 * @list: list
 * Return: pointer to string
 */

char *print_oct(va_list list)
{
	char output[1024];
	char *out_ptr;
	int i = 0;
	int len;
	unsigned int num_cp = 0;
	unsigned int num = va_arg(list, unsigned int);

	out_ptr = output;
	len = 0;

	num_cp = num;
	while (num_cp > 0)
	{
		num_cp /= 8;
		len++;
	}

	printf("%d\n", len);
	if (num == 0)
	{
		output[i] = '\0';
		return (out_ptr);
	}

	while (len > 0)
	{
		output[i] = ((num % 8) + '0');
		num /= 8;
		i++;
		len--;
	}

	rev_string(output);
	output[i] = '\0';

	return (out_ptr);
}
