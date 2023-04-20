#include <stdio.h>
#include <stdlib.h>

/**
 * main -  A function that prints all argument typed to the program
 * @argc: The argument counter
 * @argv: the argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	return (0);
}
