#ifndef LIST_H
#define LIST_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
* struct listint_s - singly linked list
* @n: NUM
* @next: point to next node
*/
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
int _putchar(char c);
size_t print_listint_safe(const listint_t *head);

#endif
