#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program by RSDG that prints combination of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
        int d, p, q;

        for (d = '0'; d < '9'; d++)
        {
        for (p = '0'; p <= '9'; p++)
        {
	for (q = '0'; d <= '9'; d++)
        {
        if (((p != d && p > d) && (p != q && p < q)) &&(d != q && d < q)) 
        {
        putchar(d);
        putchar(p);
	putchar(q);
        if (d == '8' && p == '9')
        continue;
        putchar(',');
        putchar(' ');
        }
        }
        }
        putchar('\n');
return (0);
