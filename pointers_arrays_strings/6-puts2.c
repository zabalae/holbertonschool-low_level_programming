#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 *
 * @str: - string
 *
 * Return: 0
 */

void puts2(char *str)
{
	int x, y;

	for (x = 0; *str != '\0'; x++)
	{
		str++;
	}

	for (y = 0; y < x; y = y + 2)
	{
		_putchar(str[y]);
	}

	_putchar('\n');
}
