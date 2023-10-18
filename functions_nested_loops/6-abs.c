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
		x = x * -1;

		_putchar(x);
	}

	else
	{
		_putchar(x);
	}

	return (x);
}
