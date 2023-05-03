#include <stdio.h>
#include "lists.h"

/**
 * print_list - A function that prints all the elements of a linked list
 * @h: A pointer to the list to print 'list_t'
 * Return: The number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (s);
}
