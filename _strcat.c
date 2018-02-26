#include "holberton.h"
/**
 * _strcat - concatenates two strings
 * @dest: char pointer
 * @src: char pointer
 *
 * _strncat: concatenates two strings
 *
 * Return: char pointer
 */
char *_strcat(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[n + i] = src[i];		
		i++;
	}
	return (dest);
}
