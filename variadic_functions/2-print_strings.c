#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *s;
	va_list list;

	va_start(list, n);

	for (x = 0, x < n; x++)
	{
		s = va_arg(list, char *);

		if (s != NULL)
		{
			printf("%s", s);
		}

		else
		{
			printf("(nil)");
		}

		if (x < n - 1 && separator)
		{
			printf("%s", separator);
		}
	}

	va_end(list);

	printf("\n");
}
