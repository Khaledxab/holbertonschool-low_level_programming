#include "main.h"
/**
* _puts - main.h / print a string
* @str: string
*
* Return: length of @s.
*/
void _puts(char *str)
{
while (*str)
	_putchar(*str++);

_putchar('\n');
}
