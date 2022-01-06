#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - get len
 * Return: len
 * @h: list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int s = 0;

	while (h)
	{
		h = h->next;
		s++;
	}
	return (s);
}
