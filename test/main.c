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
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)UINT_MAX;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%b]\n", 98);
    printf("Negative:[%b]\n", 98);
    _printf("Unsigned:[%]\n");
    printf("Unsigned:[%    ]\n");
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", 0, 0);
    printf("Unsigned hexadecimal:[%x, %X]\n", 0, 0);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string gcc -Wall -Wextra -Werror -pedantic -Wno-format *.cgcc -Wall -Wextra -Werror -pedantic -Wno-format *.cgcc -Wall -Wextra -Werror11111111111111111111111111111111111111111111111111111111111111111111111111111111111111-pedantic -Wno-format *.cgcc #########################################################################################################################################################################################");
    printf("String:[%d]\n", 15);
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    _printf("Len:[%r]\n", "string hello");
    printf("Len:[%r]\n", len2);
    _printf("hello %R\n", "string hello");
    return (0);
}
