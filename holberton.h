#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
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
int return_position(const char *s, int n);
int _numlen(int n);
#endif
