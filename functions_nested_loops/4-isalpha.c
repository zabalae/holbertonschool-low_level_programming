#include "main.h"

/**
 * _isalpha- Checks for alphabetic character
 *
 * c- character to be checked
 *
 * Return: 1 for lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	else if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
