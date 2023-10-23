#include "main.h"

/**
 * _strlen- function that returns the length of a string
 *
 * @s: string
 */

int _strlen(char *s)
{
	char *s[];
	int x;

	for (x = 0; *s[x] != '\0'; ++x);

	_putchar('0' + x);
}
