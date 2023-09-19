#include "main.h"
#include <stdarg.h>

/**
 * _printf - prints strings to the standard output
 * @format: format sepcifier
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	unsigned int i, count = 0;

	if (format)
	{
		va_list ap;

		va_start(ap, format);

		for (i = 0; format[i] != '\0'; i++)
		{
			char c = format[i];

			if (c == '\n')
				count += _putchar('\n');

			else if (c == '%')
			{
				char spec  = format[i + 1];

				count += process_sp(spec, ap);
				i++;
			}
			else
			{
				count += _putchar(c);
			}
		}
		return (count);
	}
	return (count);
}
