#include <stdio.h>

/**
 * main - prints all arguments it receives
 *
 * @argc: int that represents the number of command-line arguments
 *
 * @argv: array of strings that stores the actual command-line arguments
 *
 * return: 0
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
