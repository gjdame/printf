#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 */
int return_position(const char *s, int n)
{
	int i;
	
	i = 0;

	while (*s)
	{
		if (s[n + 1] != ' ')
		{
			return(i);
		}
		n++;
		i++;
	}
	return (0);
}
