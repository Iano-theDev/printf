#include "main.h"

/**
 * parse_str - parses a string
 * @ap: pointer to string arg
 * Return: string pointer
 */
char *parse_str(va_list ap)
{
	char *dest = va_arg(ap, char *);

	return (dest);
}
