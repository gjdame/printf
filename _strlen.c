#include "holberton.h"
/**
 * _strlen - string length
 * @s: string
 * Return: length of string int
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
