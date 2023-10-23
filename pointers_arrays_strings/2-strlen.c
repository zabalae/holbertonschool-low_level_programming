#include "main.h"

/**
 * _strlen- function that returns the length of a string
 *
 * @s: string
 */

int _strlen(char *s)
{
	int x, y;
	char y[] = *s;

	for (x = 0; y[x] != '\0'; x++);

	return (x);
}
