#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0
 * at a given index
 * @n: int
 * @index: index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 0;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = ~(1 << index);

	*n &= mask;

	return (1);
}
