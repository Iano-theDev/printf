#include "main.h"

int _printf(const char * const format, ...)
{
	int i = 0;

	while (format[i] != '\0')
	{
		if (_putchar(format[i]) != '\0')
		i++;
	}
	return(0);
}
