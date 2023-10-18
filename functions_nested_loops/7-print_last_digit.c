#include "main.h"

/**
 * print_last_digit- Prints last digit of a number
 *
 * @x: int variable
 *
 * Return: last
 */

int print_last_digit(int x)
{
	int last;

	last = x % 10;

	_putchar('0' + last);

	return (last);
}
