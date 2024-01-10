#include "main.h"

/**
 * parse_err - Handles an unidentified format specifier
 * @spec: format specifier
 * Return: error string
 */
char *parse_err(char spec)
{
	char *str;
	char *err_str = "%";

	str[0] = spec;
	return (_strncat(err_str, str, 1));
}
