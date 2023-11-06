#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers
 *
 * @argc: int that represents the number of command-line arguments
 *
 * @argv: aray of strings that stores the actual command-line arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x, y;
	int add = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");

				return (1);
			}
		}

		add += atoi(argv[x]);
	}

	printf("%d\n", add);

	return (0);
}
