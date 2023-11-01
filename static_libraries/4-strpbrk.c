#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any set of bytes
 *
 * @s: The string to be scanned
 *
 * @accept: string containing the characters to match
 *
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; *s != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (*s == accept[y])
			{
				return (s);
			}
		}

		s++;
	}

	return (NULL);
}
