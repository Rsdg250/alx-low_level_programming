#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - A function that finds the length of a string
 * @str: The string to be evaluated
 * Return: The length of the string
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * _strcopy - A function that copies a string pointed to by src,
 * Including the terminating null byte (\0),
 * To a buffer pointed to by dest
 * @dest: The buffer storing the string copy
 * @src: The source string
 * Return: The pointer to dest
 */

char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - A function that creates a new dog data
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 * Return: The new struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *rot;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	rot = malloc(sizeof(dog_t));
	if (rot == NULL)
		return (NULL);

	(*rot).name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*rot).name == NULL)
	{
		free(rot);
		return (NULL);
	}

	(*rot).owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*rot).owner == NULL)
	{
		free((*rot).name);
		free(rot);
		return (NULL);
	}

	(*rot).name = _strcopy((*rot).name, name);
	(*rot).age = age;
	(*rot).owner = _strcopy((*rot).owner, owner);

	return (rot);
}
