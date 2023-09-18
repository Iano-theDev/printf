#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatnates two strings
 * @dest: pointer to original string
 * @src: pointer to foreign string
 * @n: length of src string
 * Return: dest + src as dest
 */
char *_strncat(char *dest, char *src, int n)
{
	if (dest && src && n > 0)
	{
		char *ptr = dest;
		int len = _strlen(ptr);
		int i;

		for (i = 0; i < n && src[i] != '\0'; i++)
			dest[len + i] = src[i];
		dest[len + i] = '\0';
	}
	return (dest);
}
