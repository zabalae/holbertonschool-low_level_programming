#include "main.h"

/**
 * puts_half - function that prints half of a string
 *
 * @str: string
 *
 * return: 0
 */

void puts_half(char *str)
{
	int x, y, n;

	char *i = str;

	for (x = 0; i != '\0'; x++)
	{
		i++;
	}

	if (x % 2 == 0)
	{
		for (y = x / 2; str[y] != '\0'; y++)
		{
			_putchar(str[y]);
		}
	}

	else if (len % 2 == 1)
	{
		for (n = (x - 1) /2; n < x - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}

	_putchar('\n');
}
