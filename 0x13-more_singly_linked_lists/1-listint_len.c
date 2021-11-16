#include "lists.h"
/**
 * listint_len - list.
 * @h :a variable that points to a listint_t struct.
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	int number = 0;

	while (h != NULL)
	{
		number++;
		h = h->next;
	}
	return (number);
}