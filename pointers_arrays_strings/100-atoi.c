#include "main.h"

/**
 * _atoi- Function that converts a string to a integer
 *
 * @s: string to be converted
 *
 * Return: int
 */

int _atoi(char *s)
{
	int x, y, z, j, len, digit;

	x = 0;
	y = 0;
	z = 0;
	j = 0;
	len = 0;
	digit = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (x < len && j == 0)
	{
		if (s[x] == '-')
		{
			++y;
		}

		if (s[x] >= '0' && s[x] <= '9')
		{
			digit = s[x] - '0';
			if (y % 2)
				digit = -digit;

			z = z * 10 + digit;
			j = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			j = 0;
		}
		x++;
	}
	if (j == 0)
	{
		return (0);
	}
	return (z);
}
