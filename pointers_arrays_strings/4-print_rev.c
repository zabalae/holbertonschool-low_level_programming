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

	char *i = s;

	for (x = 0; *i != '\0'; x++)
	{
		i++;
	}

	for (y = 0; s[y] != '\0'; y++)
	{
		_putchar(s[x]);

		x--;

		s++;
	}
}
