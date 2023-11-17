#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list list;

	va_start(list, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(list, int));

		if (x < n - 1 && separator)
		{
			printf("%s", separator);
		}
	}

	va_end(list);
	printf("\n");
}
