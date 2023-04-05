#include "main.h"

/**
 * _memcpy - A function that copies memory areas
 * @dest: Destination memory area
 * @src: Source memory area
 * @n: number of array
 * Return: destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
