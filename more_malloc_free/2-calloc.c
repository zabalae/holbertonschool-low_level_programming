#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * calloc - function that allocates memory for an array using malloc
 * @nmemb: number of elements to be allocated
 * @size: size of elements
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	int x;

	*p = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	for (x = 0; x <= nmemb; x++)
	{
		p[x] = 0;
	}
}
