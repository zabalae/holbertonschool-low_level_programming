#include "main.h"

/**
 * get_bit - function that returns the value of a bit
 * at a given index
 * @n: int
 * @index: index
 * Return: the value of the bit at index index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int x;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	x = (n >> index) & 1;

	return (x);
}
