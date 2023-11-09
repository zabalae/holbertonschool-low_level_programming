#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second tring
 * Return: contents of s1 followed by contents of s2
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int len1 = 0, len2 = 0, i = 0;
	int x, y;

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	str = (char *) malloc(len1 + len2 + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	for (x = 0; x <= len1; x++)
	{
		str[x] = s1[x];
	}

	for (y = x + 1; y <= (len1 + len2); y++)
	{
		str[y] = s2[i];
		i++;
	}

	return (str);

}
