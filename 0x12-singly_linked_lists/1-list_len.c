#include "lists.h"

/**
 * list_len - A function that finds the number of elements in a linked list
 * @h: The linked list_t list.
 * Return: The number of elements in h.
 */

size_t list_len(const list_t *h)
{
	size_t number_of_elements = 0;

	while (h)
	{
		number_of_elements++;
		h = h->next;
	}
	return (number_of_elements);
}
