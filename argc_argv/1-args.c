#include "main.h"

/**
 * main- prints the number of arguments passed into it
 *
 * @argc: int that represents the number of command-line arguments
 *
 * @argv: array of strings that stores the actual command-line arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int count = argc - 1;

	while (count > 0)
	{
		int digit = count % 10;
		_putchar('0' + digit);
		count /= 10;
	}

	_putchar('\n');

	return (0);
}
