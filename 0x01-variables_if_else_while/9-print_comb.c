#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program by RSDG that prints all posible combinations of single digits numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;

	for (d = '0'; d <= 9; d++)
	{
	putchar(d);
	if (d != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
return (0);
}
