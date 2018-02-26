#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char s;
	s = 'W';
	char *c;
	c = "World";
		_printf("Hello %c %s\n", s, c);
	printf("Hello %c %s\n", s, c);
     return (0);
}
