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
	int a, b, c;

	while ( y <= 10)
	{

		for (x = 0; x <= 14; x++)
		{
			_putchar(x + '0');
		}

		_putchar('\n');

		y++;
	}

}
