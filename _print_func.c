#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
/**
 *
 *
 */
char *print_c(va_list list)
{
	static char s[2] = {0,'\0'};

	s[0] = va_arg(list, int);
	if (s[0] == '\0')
		return (NULL);
	return (s);
}

char *print_s(va_list list)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
		return (NULL);
	return (s);
}

/*char *print_i(va_list list, char *create_buffer)
 {
 	int i;
 	i = va_arg(list, int);
 	return (i);
}

char *print_d(va_list list)
{
	int i;
	i = va_arg(list, int);
	return (i);
	}
*/
