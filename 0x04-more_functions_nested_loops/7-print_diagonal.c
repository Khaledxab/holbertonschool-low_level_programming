#include"main.h"
/**
 * print_diagonal - print \ n times
 * @n: number of characters to draw
 */
void print_diagonal(int n)
{
int x;
int y;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
		for (y = 1; y < x; y++)
		_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
