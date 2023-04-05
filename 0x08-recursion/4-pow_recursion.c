#include "main.h"

/**
 * _pow_recursion - A fxn that returns the value of x raised to the power of y
 * @x: The number to be raised to power.
 * @y: The power.
 * Return: The value of x raised to the power of y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	return (_pow_recursion(x, y - 1));
}