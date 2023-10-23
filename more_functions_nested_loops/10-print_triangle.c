#include "main.h"

/**
 * print_triangle - function that prints a triangle
 *
 * @size: the size of the triangle
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (x = 1; x <= size; x++)
		{
			for (y = size - x; y >= 1; y--)
			{
				_putchar(' ');
			}

			for (z = 1; z <= x; z++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}
