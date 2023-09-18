#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int _printf(char *format, ...);
int _strlen(char *s);
char *_strncat(char *dest, char *src, int n);
void print_str(char *str);
void process_sp(char spec, va_list ap);

#endif
