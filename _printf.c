#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - prints strings to the standard output
 * @format: format sepcifier
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int len = 0, i = 0;
	char buffer[1024]; // carefull on how you store- possible seg fault

	if (format)
	{
		va_list ap;

		va_start(ap, format);
		
		for (; format[i] != '\0'; i++)
		{
			char s[2];

			if (format[i] == '%')
			{
				char spec = format[i + 1];
				char *temp = (*handle_format(spec))(ap);
				
				printf("specifier ahead!");
				if (temp == NULL)
				{
					temp = parse_err(spec);
					_strncpy(buffer, temp, _strlen(temp));
					break;
				}
				_strncat(buffer, temp, _strlen(temp));
				i++;
			}
			s[0] = format[i];
			_strncat(buffer, s, 1);
		}
		va_end(ap);
		len = _strlen(buffer);
		print_str(buffer);
		return (len);
	}
	return (len);
}
