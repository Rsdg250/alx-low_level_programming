#include <stdio.h>
#include <stdlib.h>

/**
 * main - A function that prints the multiplication of two numbers,
 * Followed by a new line
 * @argc: The arguments count to the program
 * @argv: The array of pointers to the arguments
 * Return: If the program receives two arguments - Always 0
 * But if the program does not receive two arguments - 1
 */

int main(int argc, char *argv[])
{
	int multiplication;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	multiplication = argv[1] * argv[2];

	printf("%d\n", multiplication);

	return (0);
}
