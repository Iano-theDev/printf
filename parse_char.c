#include "main.h"

/**
 * parse_char - recives a char and returns a string
 * @ap: pointer to string arg
 * Return: string pointer
 */
char *parse_char(va_list ap)
{
	char *dest;

	dest[0] = va_arg(ap, int);
	return (dest);
}
