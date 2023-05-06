#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - A function that converts a binary number to unsigned int
 * @b: binary number
 * Return: unsigned int (integer).
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int integer = 0;

	if (b == 0)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		integer = (2 * integer) + (b[i] - '0');
		i++;
	}
	return (integer);
}
