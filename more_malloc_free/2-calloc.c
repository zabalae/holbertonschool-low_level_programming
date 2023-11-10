#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array using malloc
 * @nmemb: number of elements to be allocated
 * @size: size of elements
 * Return: pointer string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int x;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < nmemb * size; x++)
	{
		*(p + x) = 0;
	}

	return (p);

}
