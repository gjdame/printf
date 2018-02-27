#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

void *rev_string(char *s)
{
	char b;
	int y;
	int x;
	int a;

	y = _strlen(s);
	x = _strlen(s) / 2;
	for (a = 0; a < x; a++)
	{

		b = s[a];
		s[a] = s[y - 1 - a];
		s[y - 1 - a] = b;
	}
	return(s);
}
