#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n: int
 *
 * Return: natural square root
 */

int find_sqrt(int left, int right, int n) 
{
	int mid = left + (right - left) / 2;

	if ((mid * mid) == n)
	{
		return (mid);
	}

	if (left >= right - 1) {
		return (-1);
	}

	if (mid * mid < n)
	{
		return (find_sqrt(mid, right, n));
	}
	else
	{
		return (find_sqrt(left, mid, n));
	}
}

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}

	else if (n < 0)
	{
		return (-1);
	}

	else
	{
		return (find_sqrt(1, n, n));
	}
}
