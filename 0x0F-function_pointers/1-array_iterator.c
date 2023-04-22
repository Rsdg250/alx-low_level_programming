#include "function_pointers.h"

/**
 * array_iterator - A function that executes a function
 * given as a parameter on each element of an array.
 * @array: The array to iterate over
 * @size: The size of the array
 * @action: The pointer to function used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
		size_t i;

		if (array != NULL && action != NULL)

		for (i = 0; i < size; i++)
			action(array[i]);
}
