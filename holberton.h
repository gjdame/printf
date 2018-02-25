#ifndef HOLBERTON_H
#define HOLBERTON_H
/**
 * struct print_flags - Struct
 *
 * @c: The operator
 * @f: The function associated
 */
struct print_flags
{
char *c;
void (*f)(char s);
};
typdef struct print_flags flags;
int _printf(const char *format, ...);
int _strlen(char *s);
#endif
