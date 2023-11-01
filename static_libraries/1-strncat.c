#include "main.h"

/**
 * _strncat- function that concatenates two strings
 *
 * @dest: pointer to the destination array
 *
 * @src: the string to be appended
 *
 * @n: maximum number of characters to be appended
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (dest[y] != '\0')
	{
		y++;
	}

	while (src[x] != '\0' && x < n)
	{
		dest[y] = src[x];
		y++;
		x++;
	}

	dest[y] = '\0';

	return (dest);
}
