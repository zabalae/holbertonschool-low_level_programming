#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- Prints the last digit of a number
 *
 * Return: 0 Succesful
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last = n % 10;

	if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	else if (last == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last);
	}
	else if ((last < 6) || (last != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	}
	else
	{
		printf("error\n");
	}

	return (0);
}
