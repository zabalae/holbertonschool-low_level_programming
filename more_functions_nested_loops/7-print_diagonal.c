#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 *
 * @n: number of times the character \ should be printed
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
			{
				if (x == y)
				{
					_putchar(92);

					break;
				}

				else
				{
					_putchar(' ');
				}
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
