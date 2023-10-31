#include "main.h"

/**
 * _pow_recursion- returns the value of x raised to the power of y
 *
 * @x: the floating point base value
 *
 * @y: the floating point power value
 *
 * Return: power of x
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}

	else if (y < 0)
	{
		return (-1);
	}

	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}

	else
	{
		return (1.0 / (x * _pow_recursion(x, - y - 1)));
	}
}
