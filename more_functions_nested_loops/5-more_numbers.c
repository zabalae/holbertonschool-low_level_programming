#include "main.h"

/**
 * more_numbers- prints 10 times the numbers from 0 to 14
 *
 * Return: 0
 */

void more_numbers(void)
{
	int x;

	for (int x = 0; x <= 14; x++)
	{
		if (x >= 10)
		{
			_putchar('0' + x / 10);
		}

		_putchar('0' + % 10);
	}

	_putchar('\n');

	return (0);
}
