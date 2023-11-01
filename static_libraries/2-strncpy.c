#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @dest: pointer to the destination array where the content is to be copied
 *
 * @src: String to be copied
 *
 * @n: Number of characters to be copied from source.
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (src[x] != '\0' && x < n)
	{
		dest[x] = src[x];
		x++;
	}

	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}
