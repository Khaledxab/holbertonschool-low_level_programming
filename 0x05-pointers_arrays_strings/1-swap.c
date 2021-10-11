#include "main.h"
/**
* swap_int - main.h /  swap a and b
* @a: integer to swap
* @b: integer to swap
* @x: temporary int
*/
void swap_int(int *a, int *b)
{
	int x = *a;
*a = *b;
*b = x;
}
