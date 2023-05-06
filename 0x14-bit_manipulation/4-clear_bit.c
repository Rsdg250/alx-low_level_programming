#include "main.h"
#include <stdio.h>

/**
 * clear_bit - A function that sets the value of a bit to 0 at a given index
 * @n: A pointer.
 * @index: The index of the bit to be set to zero.
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	unsigned long int nt = 1;

	if (index > 63)
		return (-1);
	for (i = 0; i < index; i++)
	{
		nt = (nt * 2);
	}
	if ((*n >> index) & 1)
		*n -= nt;
	return (1);
}
