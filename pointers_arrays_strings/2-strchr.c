#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a character in a string
 *
 * @s: string to be scanned
 *
 * @c: the character to be searched in s
 *
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	if (c == '\0')
	{
		return (0);
	}
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		if (*s == 0)
		{
			return (NULL);
		}

		s++;
	}

	return (NULL);

}
