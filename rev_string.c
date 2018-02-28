#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * rev_string - reverse string
 * @s: string
 * Return: s
 */
void *rev_string(char *s)
{
	if (s == NULL)
		return (0);
	char b;
	int y, x, a;

	y = _strlen(s);
	x = _strlen(s) / 2;

	for (a = 0; a < x; a++)
	{
		b = s[a];
		s[a] = s[y - 1 - a];
		s[y - 1 - a] = b;
	}
	return (s);
}
