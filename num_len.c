#include <stdio.h>
#include <limits.h>
#include "holberton.h"
/**
 * _numlen - length of number
 * @n: int
 * Return: length
 */
int _numlen(int n)
{
	int len = 0;

	while (n / 10 != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}
