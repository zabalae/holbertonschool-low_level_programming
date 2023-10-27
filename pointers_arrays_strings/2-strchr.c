#include "main.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @s: string to be scanned
 *
 * @c: the character to be searched in s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return s;
		}

		s++;
	}

	return NULL;
}
