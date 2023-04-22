#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - A function that returns the sum of two numbers
 * @a: The first input
 * @b: The second input
 * Return: The sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - A fuction that returns the difference of two numbers
 * @a: The first input
 * @b: The second input
 * Return: The difference of a and b
 */

int op_sub(int a, int b)
{
	return ((a) - (b));
}

/**
 * op_mul - A function that returns the product of two numbers
 * @a: The first input
 * @b: The second input
 * Return: The product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - A function that returns the division of two numbers
 * @a: The first input
 * @b: The second input
 * Return: The quotient of a and b
 */

int op_div(int a, int b)
{
	return ((a) / (b));
}

/**
 * op_mod - A function that returns the remainder
 * of the division of two numbers
 * @a: The first input
 * @b: The second input
 * Return: The remainder of the division of a by b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
