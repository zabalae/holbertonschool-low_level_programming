#include "main.h"

/**
 * _memcpy- function that copies memory area
 *
 * @dest: where the content is to be copied
 *
 * @src: source of data to be copied
 *
 * @n: number of bytes to be copied
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
