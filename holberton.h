#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int format_spec(char fs, va_list params);
int print_char(char c);
int print_str(char *s);
int print_int(int i);

#endif

