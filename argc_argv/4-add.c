#include <stdio.h>
#include <stdlib.h>

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
	int sum = 0;
	int x;

	if (argc < 2)
	{
		printf("0\n");
	}

	else
	{
		for (x = 1; x < argc; x++)
		{
			char *arg = argv[x];
			int num = 0;

			if (sscanf(arg, "%d", &num) == 1)
			{
				if (num > 0)
				{
					sum += num;
				}
				
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			
			else
			{
				printf("Error\n");
				
				return (1);
			}
		}

		printf("%d\n", sum);
	}

	return (0);
}
