#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - print list
 * Return: nodes
 * @a: list
 */
size_t print_dlistint(const dlistint_t *a)
{
	int s = 0;

	while (a)
	{
		printf("%d\n", a->n);
		a = a->next;
		s++;
	}
	return (s);
}
