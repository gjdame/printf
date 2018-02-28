#include "holberton.h"

/**
 * rot13 - convert string to rot13
 * @list: argument passed
 * Return: pointer to rot13 string
 */

char *rot13(va_list list)
{
	char alpha[] = " ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzq";
	char rot13[] = " NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	int count = 0;
	char *s = va_arg(list, char *);
	char *s_cpy;

	if (s == NULL)
		return (NULL);

	s_cpy = malloc(sizeof(char) * (_strlen(s) + 1));

	if (s_cpy == NULL)
	{
		free(s_cpy);
		return (NULL);
	}

	while (s[i] != '\0')
	{
		for (count = 0; alpha[count] != '\0'; count++)
		{
			if (s[i] == alpha[count])
			{
				s_cpy[i] = rot13[count];
				break;
			}
		}
		i++;
	}
	s_cpy[i] = '\0';
	return (s_cpy);
}
