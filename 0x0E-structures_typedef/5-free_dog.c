#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - A function that frees dog
 * @d: The dog that will be free
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).owner);
		free((*d).name);
		free(d);
	}
}
