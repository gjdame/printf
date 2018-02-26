#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("Let's try to printf a simple sentence.\n");
    printf("Let's try to printf a simple sentence.\n");
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%   s %   c %   r]\n", "I am a string !", 'a');
    printf("String:[%   s %   c %   r]\n", "I am a string !", 'a');
    _printf("Percent:[%s]\n", 0);
    printf("Percent:[%s]\n", 0);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
