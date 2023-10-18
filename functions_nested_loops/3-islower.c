#include "main.h"

/**
 * _islower- Checks for lowercase character
 *
 * c- The character is going to check
 *
 * Return: 1 if c is lowercase 0 if its not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return(0);
}
