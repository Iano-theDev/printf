#include "main.h"

/**
 * parse_dec - parses a decimal number
 * @ap: pointer to string arg
 * Return: string pointer
 */
char *parse_dec(va_list ap)
{
	char *dest;
	int num = va_arg(ap, int);

	return (dest);
}


/**
 * get_abs - gets abs value of n
 * @n: int
 * Return: abs(n), abs value of n
 */
int get_abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
