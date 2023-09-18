#include "main.h"

/**
 * print_str - prints a string
 * @str: string pointer
 * Return: void
 */
void print_str(char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
