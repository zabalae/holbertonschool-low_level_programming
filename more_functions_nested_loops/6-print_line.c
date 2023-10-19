#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 *
 * @n: number of times the character _ should be printed
 *
 * Return:0
 */

void print_line(int n)
{

	while (n > 0)
	{
		_putchar(95);

		n--;
	}

	_putchar('\n');
}
