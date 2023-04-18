#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - A function that initializes variable type struct dog
 * @d: The dog
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
