#include "main.h"
#include <stdlib.h>

/**
 * print_num - print numbers to std out
 * @n: integer
 * Return: void
 */
int print_num(int n)
{
	unsigned int i;
	int a = get_abs(n), b = a, count = 0;
	char *str;

	if (n)
	{
		if (n == 0)
		{
			count += _putchar(n + '0');
			return (count);
		}
		if (n < 0)
			_putchar('-');
		for (i = 0; b > 0; i++)
			b /= 10;

		str = malloc((i + 1) * sizeof(char));

		while (i > 0)
		{
			char c = a % 10;

			str[i - 1] = (c + '0');
			a /= 10;
			i--;
		}
		count += print_str(str);
	}
	return (count);
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
