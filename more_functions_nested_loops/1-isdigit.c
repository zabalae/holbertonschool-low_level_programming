#include "main.h"

/**
 * _isdigit- Checks for a digit
 *
 * @c: variable
 *
 * Returns: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
