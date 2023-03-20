#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program by RSDG that prints all the alphabet in small then in capital letters
 * Return: Always (success)
 */

int main(void)
{
	char low;
	for (low = 'a'; low <= 'z'; low++)
	putchar(low);
	for (low = 'A'; low <= 'Z'; low++)
	putchar(low);
	putchar('\n');
return (0);
}
