#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program by RSDG that printa all aphabet in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low;

	for (low = 'z'; low <= 'a'; low++)
	putchar(low);
	putchar('\n');
return (0);
}