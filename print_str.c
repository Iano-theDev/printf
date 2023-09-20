#include "main.h"

/**
 * print_str - prints a string
 * @str: string pointer
 * Return: void
 */
int print_str(char *str)
{
	unsigned int i = 0, j = 0;
	char *null_str = "(null)";

	if (str)
	{
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
		return (i);
	}
	for (j = 0; null_str[j] != '\0'; j++)
	{
		_putchar(null_str[j]);
	}
	return (j);
}
