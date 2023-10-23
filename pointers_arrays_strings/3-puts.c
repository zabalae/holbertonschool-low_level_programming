#include "main.h"

/**
 * _puts- function that prints a string
 *
 * @str: string
 *
 * return: 0
 */

void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}

	_putchar('\n');
}
