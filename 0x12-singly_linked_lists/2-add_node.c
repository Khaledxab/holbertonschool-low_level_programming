#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: variable pointing to variable pointing to a struct
 * @n: value of new node
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str);
{
	listint_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
