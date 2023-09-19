#include "main.h"

/**
 * print_bin - prints a given intiger's binary equivalent
 * @n: integer argument
 * Return: void
 */
void print_bin(int n)
{
	int i;
	
	if (n)
	{
		if (n == 0)
			return;
		
		i = n % 2;

		print_bin(n / 2);
		_putchar(i + '0');
	}
}
