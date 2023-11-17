#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: numbers
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int sum;
	va_list list;

	if (n == 0)
	{
		return (0);
	}

	va_start(list, n);

	for (x = 0; x < n; x++)
	{
		sum += va_arg(list, int);
	}

	va_end(list);

	return (sum);
}
