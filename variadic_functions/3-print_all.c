#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of all types of arguments passed to the function
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	const char valid_args[] = "cifs";
	char *s;
	int printed = 0, x = 0, y = 0;
	va_list list;

	va_start(list, format);

	while (format && format[x])
	{
		while (valid_args[y])
		{
			if (format[x] == valid_args[y] && printed)
			{
				printf(", ");
				break;
			}
			y++;
		}

		switch (format[x])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				printed = 1;
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				printed = 1;
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				printed = 1;
				break;
			case 's':
				s = va_arg(list, char *);
				printed = 1;
				if (!s)					
				{
				printf("(nil)");
				break;
				}
				printf("%s", s);
				break;
				x++;
		}
	}
	va_end(list);
	printf("\n");

}
