#include <stdio.h>

/**
 * main - A function that prints the program name,
 * Followed by a new line
 * @argc: The amount of arguments supplied to the program
 * @argv: An array of arguments that is supplied to the program
 * Return: Always 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
