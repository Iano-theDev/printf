#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if s1 and s2 are equal, lexographic difference otherwise
 */
int _strcmp(char *s1, char *s2)
{
	if (s1 == NULL && s2 == NULL)
		return (0);
	else if (s1 == NULL)
		return (-1);
	else if (s2 == NULL)
		return (1);
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (s1 != s2)
			return (s1 - s2);
		s1++;
		s2++;
	}
	return (s1 - s2);
}
