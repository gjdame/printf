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
	char *buff = create_buff;
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

	for (i = 0; format[i] != '\0'; i++, b_len++)
	{
		if (format[i] == '%')
		{
			for (j = 0; flags_t[j].f != NULL; j++)
			{
				if (format[i + 1] == *(flags_t[j].c))
				{
				    s = flags_t[j].f(list);
				    _strcat(buff, s);
				    b_len +=  _strlen(s);
				    i = i + 2;
				}
			}
		}
		else
			create_buff[b_len] = format[i];
	}
	create_buff[b_len] = '\0';
	write(1, &create_buff, _strlen(create_buff));
	va_end(list);
	return(0);
}
