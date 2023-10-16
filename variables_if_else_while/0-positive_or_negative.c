#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This is the entry point of the code
 * 
 * Return - 0 Successful
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive");
	}
	else if (n == 0)
	{
		printf("is zero");
	}
	else if (n < 0)
	{
		printf("is negative");
	}
	else
	{
		printf("error");
	}
	return (0);
}
