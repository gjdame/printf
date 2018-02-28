#include "holberton.h"

/**
 * *_strncpy - copy string
 * @dest: pointer to dest
 * @src: pointer to src
 * @n: number of bytes
 *
 * Return: copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int len = 0;

	while (src[len] != '\0')
		len++;
	for (i = 0; i <= len; i++)
		dest[i] = src[i];

	return (dest);
}
