#include "main.h"
/**
* print_rev - main.h / print a string
* @s: string
*/
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	continue;
	while (i > 0)
{
	_putchar(s[i - 1]);
	i--;
}
_putchar('\n');
}
