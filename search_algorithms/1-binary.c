#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	int x, right = size - 1, mid, left = 0;

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		print("Searching in array: ");

		for (x = left; x <= right; ++x)
		{
			printf("%d ", array[x]);
		}

		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}

		else if (array[mid] < value)
		{
			left = mid + 1;
		}

		else
		{
			right = mid - 1;
		}
	}

	return (-1)
}
