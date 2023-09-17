#include <unistd.h>

/**
 * _putchar - prints a character to stdout
 * @c: character
 * Return: char in stdout
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
