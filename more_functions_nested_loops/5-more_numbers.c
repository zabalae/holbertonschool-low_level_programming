#include "main.h"

/**
 * more_numbers- prints 10 times the numbers from 0 to 14
 *
 * Return: 0
 */

void more_numbers(void)
{
	int x;
	int y = 0;

	while (y < 10)
	{

		for (x = 0; x <= 14; x++)
		{
			if (x >= 10)
			{
				_putchar('0' + x / 10);
			}

			_putchar('0' + x  % 10);
		}

		_putchar('\n');

		y++;
	}

}
