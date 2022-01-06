#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - get len
 * Return: len
 * @a: list
 */
size_t dlistint_len(const dlistint_t *a)
{
	int size = 0;

	while (a)
	{
		a = a->next;
		s++;
	}
	return (s);
}
