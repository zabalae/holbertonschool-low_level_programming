#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array- function that creates an array of chars
 * @size: size of array
 * @c: array
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}

	char *ptr = (char *)malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		ptr[x] = c;
	}

	return (ptr);
}
