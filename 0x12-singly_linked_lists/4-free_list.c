#include <stdlib.h>
#include "lists.h"

/**
 * free_list - A function tht frees the linked list
 * @head: list_t list to be freed
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
