#include "main.h"
#include <stdio.h>
#include < stdlib.h>

/**
 * _strdup - function tha returns a pinter to a newly allocated space in memory
 * @str: string to duplicate
 * Return: pointer to new string
 */

char *_strdup(char *str)
{
	char *copy;
	int len = 0;
	int x;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	copy = (char *) malloc(len + 1);

	if (copy == NULL)
	{
		return (NULL);
	}

	for (x = 0; x <= len ; x++)
	{
		copy[x] = str[x];
	}

	return (copy);
}
