#include "lists.h"
/**
 * list_len - list.
 * @h :a variable that points to a listint_t struct.
 * Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
	int number = 0;

	while (h != NULL)
	{
		number++;
		h = h->next;
	}
	return (number);
}
