#include "main.h"

/**
 * _puts_recursion - prints a string
 *
 * @s: string to print.
 *
 */
void _print_rev_recursion(char *s)
{
	if(*s)
	{
	_print_rev_recursion(s + 1); 
	_putchar(*s);
	}
}
