#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Check if the random number is potive, negative or zero
 * main: This is the entry point of the code
 * Return: 0 Successful
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
