#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the opcodes of its own main function
 * @argc: The number of arguments passed (argument count)
 * @argv: The array of arguments passed (argument Array)
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, bytes;
	unsigned char *buffer;

	if (argc != 2)
	{
		puts("Error");
		exit(1);
	}
	bytes = atoi(argv[1]);
	buffer = (unsigned char *)main;
	if (bytes < 0)
	{
		puts("Error");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		printf("%.2x", buffer[i]);
		if (i != bytes - 1)
			printf(" ");
	}
	puts("");
	return (0);
}
