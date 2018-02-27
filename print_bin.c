#include "holberton.h"

char *print_bin(va_list list)
{
	unsigned int b_num[64];
	char *b_str;
	int i = 0;
	int num = va_arg(list, unsigned int);

	if (num == 0)
	{
		b_num[i] = 0;
		b_str = _itoa(b_num);
		return (b_str);
	}

	while (num > 0)
	{
		b_num[i] = num % 2;
		num /= 2;
		i++;
	}

	for (j = (i - 1); j < 64; j++)
		b_num[j] = 0;
	b_str = _itoa(b_num); /*convert num to string*/
	return (b_str);
}
