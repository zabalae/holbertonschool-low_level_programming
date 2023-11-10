#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimun value in array
 * @max: maximum value in array
 * Return: int array
 */

int *array_range(int min, int max)
{
	int *arr;
	int x, y = (max - min) + 1;

	if (min > max)
	{
		return (NULL);
	}

	arr = (int *)  malloc(sizeof(int) * y);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < y; x++)
	{
		arr[x] = min;
		min++;
	}

	return (p);


}
