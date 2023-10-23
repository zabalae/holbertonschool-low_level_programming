#include "main.h"

/**
 * reset_to_98 - update the value to 98
 *
 * @*n: pointer
 *
 * Return: 0
 */

void reset_to_98(int *n)
{
	int *p = &n;

	*p = 98;

	return (0);
}
