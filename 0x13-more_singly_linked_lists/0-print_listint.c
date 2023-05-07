#include "lists.h"
#include <stdio.h>

/**
 * print_listint - A function that prints all the elements of a linked list
 * @h: The head of the list.
 * Return: The number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
