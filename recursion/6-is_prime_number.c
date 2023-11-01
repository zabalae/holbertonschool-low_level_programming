#include "main.h"

/**
 * is_prime_number- function that returns 1 if is a prime number
 * otherwise return 0
 *
 * @n: number
 *
 * Return: 1 if is prime 0 if its not
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	int is_prime_helper(int divisor, int number)
	{
		if (divisor == number)
		{
			return (1);
		}

		if (number % divisor == 0)
		{
			return (0);
		}

		return (is_prime_helper(divisor + 1, number));
	}

	return (is_prime_helper(2, n));
}
