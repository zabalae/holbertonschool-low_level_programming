#include "main.h"

/**
 * find_sqrt- function to find the square root of a number
 *
 * @x: previous number
 *
 * @y: square value
 *
 * Return: natural square root
 */

int find_sqrt(int x, int y)
{
	if (x > y)
	{
		return (-1);
	}

	else if (x * x == y)
	{
		return (x);
	}

	return (find_sqrt(x + 1, y));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: int
 * Return: square root

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (find_sqrt(1, n));
}
