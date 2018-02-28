#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * struct print_flags - Struct
 *
 * @c: The operator
 * @f: The function associated
 */
struct print_flags
{
char *c;
char *(*f)(va_list list);
};
typedef struct print_flags flags;
int _printf(const char *format, ...);
int _strlen(char *s);
char *_strcat(char *dest, char *src, int n);
char *print_c(va_list list);
char *print_s(va_list list);
char *print_i(va_list list);
char *print_d(va_list list);
char *print_p(va_list list);
char *print_u(va_list list);
char *print_oct(va_list list);
char *print_hex(va_list list);
char *print_hex_low(va_list list);
char *print_r(va_list list);
void *rev_string(char *s);
char *print_bin(va_list list);
char *rot13(va_list list);
int return_position(const char *s, int n);
int _numlen(int n);
char *_strcpy(char *dest, char *src);
#endif
