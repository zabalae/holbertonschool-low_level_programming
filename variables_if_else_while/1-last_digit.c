#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main- Prints if the last digit of a number is greater than 5, 0 or less than 6 and not 0
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
				
	n = rand() - RAND_MAX / 2;

	int last_digit = n % 10;
	
	if (last_digit > 5)
	{
		printf("The last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("The last digit of %d is %d and is 0\n", n, last_digit);
	}
	else if (last_digit < 6) || (last_digit != 0)
	{
		printf("The lat digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	}
	else
	{
		printf("error\n");
	}

	return (0);
}
