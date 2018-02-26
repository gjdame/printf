#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include "holberton.h"
/**
 *
 *
 */
int _printf(const char *format, ...)
{
	char create_buff[1024];
	int i;
	int j;
	int b_len = 0;
	char *s;
	va_list list;

	flags flags_t[] = {
		{"c", print_c},
		{"s", print_s},
		//{"i", print_i},
		//{"d", print_d},
		{NULL, NULL}
	};

	va_start(list, format);

	if (format == NULL)
		return (0);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			create_buff[b_len] = '%';
			b_len++;
		}
		else if (format[i] == '%')
		{
			if (format[i + 1] == ' ')
				i = i + (return_position(format, i));
			for (j = 0; flags_t[j].f != NULL; j++)
			{
				if (format[i + 1] == *(flags_t[j].c))
				{
					s = flags_t[j].f(list);
					_strlen(s);
					_strcat(create_buff , s, b_len);
					b_len += _strlen(s);
					i++;
				}
			}
		}
		else
		{
			create_buff[b_len] = format[i];
			b_len++;
		}
	}
	write(1, create_buff, b_len);
	va_end(list);
	return(b_len);
}
