#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - A function that converts a binary number to unsigned int
 * @b: binary
 * Return: unsigned int (integer).
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int integer;

	if (b == NULL)
	{
	return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
	if (b[i] == '0')
	{
		integer = integer << 1;
	}
	else if (b[i] == '1')
	{
		integer = integer << 1;
		integer = integer | 1;
	}
	else
		{
		return (0);
		}
	}
	return (integer);
}
