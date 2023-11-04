#include "main.h"

/**
 * main - program that prints its name
 *
 */

int main(int argc, char *argv[]) 
{
	int x;
	if (argc > 0)
	{
		for (x  = 0; argv[0][x] != '\0'; x++)
		{

		putchar(argv[0][x]);
		
		}

	putchar('\n');

	}

	return 0;
}
