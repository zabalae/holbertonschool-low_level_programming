#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 *
 * @a: array
 *
 * @n: number of elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x, y, z;

	x = n - 1;

	for (y = 0; y < n / 2; y++)
	{
		z = a[y];
		a[y] = a[x];
		a[x--] = z;
	}
}
