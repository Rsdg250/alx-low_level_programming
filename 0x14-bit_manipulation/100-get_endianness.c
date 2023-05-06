#include "main.h"
#include <stdio.h>

/**
 * get_endianness - A function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int n;
	char *c;

	n = 1;
	c = (char *) &n;

	return ((int)*c);
}
