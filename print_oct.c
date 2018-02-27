#include "holberton.h"
/**
 * print_oct - print octal from decimal
 * @list: list
 * Return: pointer to string
 */

char *print_oct(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	char *output;
	int i = 0;
	int len = _numlen(num);

	output = malloc(sizeof(char) * len + 1);

	if (output == NULL)
	{
		free(output);
		return (NULL);
	}

	while (len >= 0)
	{
		output[i] = ((num % 8) + '0');
		num /= 8;
		i++;
		len--;
	}

	rev_string(output);

	output[i] = '\0';
	return (output);
}
