#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array
 * of integers using the linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	int x;

	if (array == NULL)
	{
		return (-1);
	}

	for (x = 0; x < (int)size; x++)
	{
		printf("Value checked array[%d] = [%d]\n", x, array[x]);

		if (array[x] == value)
		{
			return (x);
		}
	}

	return (-1);


}
