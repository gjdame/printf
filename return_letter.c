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
	int holder;
	
	holder = n;
	i = 0;
	n++;
	while (*s)
	{
		if (s[n] != ' ')
		{
			return (holder - i);
		}
		n++;
		i++;
	}
	return (0);
}
