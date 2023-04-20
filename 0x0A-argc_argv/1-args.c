#include <stdio.h>

/**
 * main - A function that prints amount of argument typed to program
 * @argc: The amount of arguments typed to the program
 * @argv: The array of argument to the program
 * Return: Always 0.
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
