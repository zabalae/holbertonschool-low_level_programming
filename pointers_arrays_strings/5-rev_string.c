#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s: string
 *
 * return: 0
 */

void rev_string(char *s)
{
	int x, y, z;

	z = 0;

	char **i = s;

	for (x = 0; i != '\0'; x++)
	{
		i++;
	}

	for (y = x - 1; y >= 0; y--)
	{
		i[z] = s[y];

		z++;
	}

	s = i;

	_putchar('\n');
}
