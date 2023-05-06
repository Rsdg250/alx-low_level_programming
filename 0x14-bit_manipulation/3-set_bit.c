#include "main.h"
#include <stdio.h>

/**
 * set_bit - A function that sets the value of a bit to 1 at a given index
 * @n: A pointer
 * @index: The index of the bit
 * Returns 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int nt = 1;

	if (index > 63)
		return (-1);
	for (; index > 0; index--)
	{
		nt = nt << 1;
	}

	*n |= nt;
	return (1);
}
