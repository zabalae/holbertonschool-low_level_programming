#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 *
 * @argc: int that represents the number of command-line argumrnts
 *
 * @argv: array of strings that stores the actual command-line arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
