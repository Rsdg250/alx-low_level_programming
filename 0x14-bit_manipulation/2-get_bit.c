#include "main.h"
#include <stdio.h>

/**
 * get_bit - A function that returns the value of a bit at a given index
 * @n: The number.
 * @index: The index of the bit.
 * Return: the value of the bit at the given index
 * or -1  if error occurs.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 64)
		return (-1);

	bit = (n >> index) & 1;
	return (bit);
}
