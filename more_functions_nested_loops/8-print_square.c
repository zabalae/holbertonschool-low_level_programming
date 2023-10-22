#include "main.h"

/**
 * print_square - function that prints a square
 *
 * @size: size of the square
 *
 * Return: 0
 */

void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (y = 0; y < size; y++)
		{
			for (x = 0; x < size; x++)
			{
				if (y == x)
				{
					_putchar(35);

					break;
				}
			

				else
				{
					_putchar('\n');
				}
			}
		}
	}

	else
	{
		_putchar('\n');
	}
}
