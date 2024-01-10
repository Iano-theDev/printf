#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct op - operation structure
 * @spec: format specifier
 * @parser: parser function
 */
typedef struct op
{
	char *spec;
	char *(*parser)(va_list);
} op_t;

int _printf(const char *format, ...);
char *(*handle_format(char spec))(va_list ap);
int _strlen(char *s);
char *_strncat(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_strncpy(char *dest, char *src, int n);
int print_str(char *str);
int _putchar(char c);
char *parse_err(char spec);
char *parse_str(va_list ap);
char *parse_char(va_list ap);
char *parse_percent(va_list ap);

#endif
