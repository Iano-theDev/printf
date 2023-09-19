#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(char *s);
char *_strncat(char *dest, char *src, int n);
int print_str(char *str);
int print_num(int n);
int get_abs(int n);
int process_sp(char spec, va_list ap);

#endif
