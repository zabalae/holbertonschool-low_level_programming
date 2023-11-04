#include "main.h"

/**
 * main - program that prints its name
 *
 * @argc: int that represents the number of command line arguments
 *
 * @argv: array of strings that stores the actual command line arguments
 *
 * Return: program name
 *
 */

int main(int argc, char *argv[])
{
	int x;

	if (argc > 0)
	{
		for (x  = 0; argv[0][x] != '\0'; x++)
		{
		_putchar(argv[0][x]);
		}

	_putchar('\n');

	}

	return (0);
}
