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
char *_strcat(char *dest, char *src)
{
	int len_dest;
	int i;

	len_dest = _strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	return (dest);
}
