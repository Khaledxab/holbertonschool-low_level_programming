#include "main.h"

/**
 * more_numbers - Prints the numbers 0-14 ten times.
 */
void print_line(int n)
{
		int l;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
			_putchar('_');
	}

	_putchar('\n');
}

