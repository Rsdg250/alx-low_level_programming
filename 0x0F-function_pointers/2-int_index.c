#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer
 * @array: The array the function searches for integers
 * @size: The size of the array
 * @cmp: The pointer to function used to find the integer
 * Return: return -1 if size <= 0
 * or if array is NULL
 * or cmp is NULL
 * index of integer otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		{
		if (cmp(array[i]) != 0)
			return (i);
		}
	return (-1);
}
