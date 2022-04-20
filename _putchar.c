#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - writes char c 
 * @c: The char to be printed
 * Return: 1 on succes & -1 on errror.
 */

int main(void)
{
	int _putchar(char c)
	{
		return(write(1, &c, 1);
	}
}
