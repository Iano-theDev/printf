#include "main.h"

/**
 * _strncpy - copies n characters from src to dest
 * @dest: where to copy
 * @src: string to be copied
 * @n: number of characters to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	unsigned int i;

	if (dest &&  src && n > 0)
	{
		for (i = 0; src[i] != '\0' && i < n; i++)
		{
			dest[i] = src[i];
		}
		for (; i < n; i++)
		{
			dest[i] = '\0';
		}
		return (dest);
	}
	return NULL;
}
