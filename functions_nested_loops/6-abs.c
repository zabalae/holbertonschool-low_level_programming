#include "main.h"

/**
 * _abs - computes the absolute value of integer
 *
 * @x: int number
 *
 * Return: 0
 */

int _abs(int x)
{

	if (x < 0)
	{

		x = x * -1;

		return (x);
	}

	return (x);
}
