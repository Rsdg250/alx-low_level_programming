#include "main.h"
#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a newly-allocated-
 * space in memory containing a copy of the string givenas parameter
 * @str: The string to be copied.
 * Return: If str == NULL or insufficient memory is available - NULL.
 * Otherwise - a pointer to the duplicated string (dup).
 */

char *_strdup(char *str)
{
	char *dup;
	int i, n = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		n++;

	dup = malloc(sizeof(char) * (n + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	dup[n] = '\0';

	return (dup);
}
