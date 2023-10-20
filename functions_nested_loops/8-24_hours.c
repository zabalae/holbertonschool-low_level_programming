#include "main.h"

/**
 * jack_bauer- prints every minute of the day of Jack Bauer
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int x, y, i, z;

	for (x = 0; x <= 2; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if ((x <= 1 && y <= 9) || (x <= 2 && y <= 3))
			{
				for (i = 0; i <= 5; i++)
				{

					for (z = 0; z <= 9; z++)
				{
						_putchar(x + '0');
						_putchar(y + '0');
						_putchar(58);
						_putchar(i + '0');
						_putchar(z + '0');
						_putchar('\n');
				}
			
				}
			}
		}
	}
}
