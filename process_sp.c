#include "main.h"
#include <stdarg.h>

/**
 * process_sp - processes the format specifier to use
 * @spec: specifier
 * @ap: pointer to argument pointer
 * Return: void
 */
int process_sp(char spec, va_list ap)
{
	int count = 0;

	switch (spec)
	{
	case 's':
	{
			char *str = va_arg(ap, char*);

			count += print_str(str);
			break;
	}
	case 'c':
	{
			char temp = va_arg(ap, int);

			count += _putchar(temp);
			break;
	}
	case 'd':
	{
			int num = va_arg(ap, int);

			count += print_num(num);
			break;
	}
	}
	return (count);
}
