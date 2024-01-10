#include "main.h"
#include <stdio.h>

/**
 * handle_format - links format specifiers to respective parsers
 * @spec: format specifier
 * Return: string after operation
 */
char *(*handle_format(char spec))(va_list ap)
{
	op_t ops[] = {
		{"%", parse_percent},
		{"s", parse_str},
		{"c", parse_char},
		{NULL, NULL},
	};
	int i = 0;

	printf("Failues in handle format");
	
	while (ops[i].spec)
	{
		if (ops[i].spec[0] == spec)
			return (ops[i].parser);
		i++;
	}
	return NULL;
}