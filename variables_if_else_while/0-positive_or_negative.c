#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main: This is the entry point of the code
 *
 * Description: Checks if the random number is positive, negative or zero
 *
 * Return: 0 Successfu
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("error\n");
	}
	return (0);
}
