#include "main.h"

/**
 * _pow_recursion - x power y
 *
 * @x: int.
 * @y: int.
 * Return: value of x
 */
void _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
    	else if (y < 0)
		return (-1);
	else
		return (x * (_pow_recursion(x, y - 1)));
}