#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char c = '!';
	char *s = "Morning";

    _printf("Let's try to printf a simple sentence.\n");
    printf("Let's try to printf a simple sentence.\n");
    _printf("H\tH");
    printf("H\tH");
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%    r]\n", "I am a string !");
    printf("String:[%     r]\n", "I am a string !");
    _printf("Percent:[%%]\n");
    printf("Percent:[%%]\n");
    _printf("Good %s %c%c\n", s , c, c);
    printf("Good %s %c%c\n", s , c, c);
     _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
