#include "main.h"

/**
 * print_str - prints a string
 * @str: string pointer
 * Return: void
 */
int print_str(char *str)
{
	unsigned int i = 0;

	if (str)
	{
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
		return (i);
	}
	return (i);
}
