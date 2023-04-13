#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to a 2-dimensional
 * Array of integers with each element initalized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 * Return: If width <= 0, height <= 0, or the function fails - NULL
 * Otherwise - a pointer to the 2-dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **D;
	int hi, wi;

	if (width <= 0 || height <= 0)
		return (NULL);

	D = malloc(sizeof(int *) * height);

	if (D == NULL)
		return (NULL);

	for (hi = 0; hi < height; hi++)
	{
		D[hi] = malloc(sizeof(int) * width);

		if (D[hi] == NULL)
		{
			for (; hi >= 0; hi--)
				free(D[hi]);

			free(D);
			return (NULL);
		}
	}
	for (hi = 0; hi < height; hi++)
	{
		for (wi = 0; wi < width; wi++)
			D[hi][wi] = 0;
	}
	return (D);
}
