#include "lists.h"
#include <string.h>

/**
 * add_node_end - A function that adds a new node at the end of a list.
 * @head: A pointer the head of the list.
 * @str: The string to be added to the list.
 * Return: If the function fails - NULL.
 * Otherwise - Return the address of the new node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new_node, *last;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new_node->str = dup;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}
	return (new_node);
}
