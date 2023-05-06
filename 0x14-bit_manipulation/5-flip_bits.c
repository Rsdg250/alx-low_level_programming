#include "main.h"
#include <stio.h>

/**
 * flip_bits - A function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: A number
 * @m: A number
 * Return: The number of bits requires to get from one number to another (i)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int nt;
	int i;

	nt = n ^ m;
	for (i = 0; nt != 0; i++)
		nt &= (nt - 1);
	return (i);
}
