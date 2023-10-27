#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: the main string to be scanned
 *
 * @accept: The string containing the list of characters to match in s
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;

	while (s[x] == accept[x])
	{
		x++;
	}

	return (x);
}
