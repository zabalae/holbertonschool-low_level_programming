#include "main.h"

/**
 * atoi- Function that converts a string to a integer
 *
 * @s: string to be converted
 *
 * Return: int
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int x = 0;

	if (s[0] == '-')
	{
		sign = -1;
		x = 1;
	}

	else if (s[0] == '+')
	{
		x = 1;
	}

	while (s[x] != '\0')
	{
		if (s[x] >= '0' && s[x] <= '9')
		{
			result = result * 10 + (s[x] - '0');
		}

		else
		{
			break;
		}

		x++;
	}

	return result * sign;
}
