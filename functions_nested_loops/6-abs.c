#include "main.h"

/**
 * _abs - computes the absolute value of integer
 *
 * Return: 0
 */

int _abs(int x)
{

	if (x < 0)
	{
		int nx = x * -1;

		_putchar(nx);

		return (nx);
	}

	return (x);
}
