#include "main.h"
/**
 * reverse_array - Reverses the content of an array.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 *
 */
void reverse_array(int *a, int n)
{
	int j, t, i = n;

	for (i--, j = 0; j < n / 2; j++, i--)
		{
		t = a[j];
		a[j] = a[i];
		a[i] = t;
		}
}
