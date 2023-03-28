#include "main.h"
/**
 * swap_int - swaps two numbers
 * @a : one number to swapped
 * @b : second number
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
