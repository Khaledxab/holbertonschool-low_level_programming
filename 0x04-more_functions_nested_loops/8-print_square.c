#include"main.h"
/**
 * print_square - print # n times
 * @size: number of characters to draw
 */
void print_square(int size)
{
int x;
int y;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
		for (y = 1; y < x; y++)

			_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
