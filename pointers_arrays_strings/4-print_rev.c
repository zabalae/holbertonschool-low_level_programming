#include "main.h"

/**
 * print_rev- function that prints a string in reverse
 *
 * @s: string
 *
 * return:0
 */

void print_rev(char *s)
{
	int x, y;

	for (x = 0; *s != '\0'; x++)
	{
		s++;
	}

	for (y = 0; y <= x; y++)
	{
		_putchar(s[x]);

		x--;
	}
}
