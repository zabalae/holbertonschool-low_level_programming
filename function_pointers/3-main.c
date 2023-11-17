#include "3-calc.h"

/**
 * main - main
 * @argc: number of arguments passed
 * @argv: pointer array that points to each argument passed
 * to the program
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x, y;
	int (*opr)(int int);

	if (argc != 4)
	{
		printf("Error\n");

		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");

		exit(99);
	}

	opr = get_op_func(argv[2]);

	if (opr == NULL)
	{
		printf("Error\n");

		exit(99);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);

	printf("%d\n", opr(x, y));
	return (0);
}
