#include "main.h"

/**
 * _pow_recursion - Function that returns the factorial of a given number
 * @x: Base
 * @y: power
 *
 * Return: Result of x raised to the power of y.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);

	return (x * _pow_recursion(x, y - 1));
}
