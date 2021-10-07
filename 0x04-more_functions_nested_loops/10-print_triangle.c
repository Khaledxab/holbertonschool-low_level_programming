#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int h,index;

	if(size > 0)
	{
		for (h = 1; h <= size; h++)
		{
			for (index = size - h; index > 0; index--)
				_putchar(' ');

			for (index = 0; index < hash; i++)
				_putchar('#');

			if (h == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
