#include "lists.h"
/**
 * print_listint - Prints list elements
 * @h: Pointer to list
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t a;

	a = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		a++;
	}
	return (a);
}
