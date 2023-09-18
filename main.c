#include "main.h"

int main(void)
{
	char *name = "Ian";
	int age = 25;
	char year = 'Y';
	char colon = ':';
	
	_printf("Hello %s!, you are %c%c%d", name, year, colon, age);
	return (0);
}
