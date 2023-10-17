#include "main.h"

/**
 * main- print alphabet
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char x;
	for(x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}

	_putchar('\n');

	return (0);
}
