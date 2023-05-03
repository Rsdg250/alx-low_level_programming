#include "lists.h"

/**
 * listint_len - A function that counts the number of nodes in a linked list
 * @h: The head or start of the list
 * Return: The number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t number = 0;

	while (cursor != NULL)
	{
		number = number + 1;
		cursor = cursor->next;
	}
	return (number);
}
