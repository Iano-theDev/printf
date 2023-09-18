#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * process_sp - processes the format specifier to use
 * @spec: specifier
 * @ap: pointer to argument pointer;
 * Return: void
 */
void process_sp(char spec, va_list ap)
{
	switch (spec)
	{
	case 's':
	{
			char *str = va_arg(ap, char*);

			print_str(str);
			break;
	}

	case 'c':
	{
			char temp = va_arg(ap, int);

			_putchar(temp);
			break;
	}
	case 'd':
	{
			int num = va_arg(ap, int);

			printf("%d", num);
			break;
	}
	}
}
