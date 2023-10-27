#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: the main string to be scanned
 *
 * @accept: The string containing the list of characters to match in s
 *
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;

	while (*s != '\0')
	{
		char *a = accept;
		int found = 0;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}

			a++;
		}

		if (found)
		{
			x++;
			s++;
		}

		else
		{
			break;
		}
	}

	return (x);
}
