#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array
 *
 * @a: array
 *
 * @n: numbers of elements to be printed
 *
 * return: void
 */

void print_array(int *a, int n)
{
	for (int x = 0; x < n; x++)
	{
		if (x < n - 1)
		{
			printf("%d, ", a[x]);
		}

		else if (x == n - 1)
		{
			printf("%d", a[x]);
		}
	}

	printf('\n');
}
