#include "main.h"

/**
 * _strlen - gets the length of a string
 * @s: string pointer
 * Return: lenght of s
 */

int _strlen(char *s)
{
	int len = 0;

	if (s)
	{
		while (s[len] != '\0')
			len++;
		return (len);
	}
	return (len);
}
