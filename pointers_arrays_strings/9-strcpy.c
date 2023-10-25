#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src to dest
 *
 * @dest: copy of the string in src
 *
 * @src: the string to be copied
 *
 * return: dest
 *
 */

char *_strcpy(char *dest, char *src)
{
	int x, y;

	char *i = src;

	for (x = 0; *i != '\0'; x++)
	{
		i++;
	}

	for (y = 0; y == x; y++)
	{
		dest[y] = src[y];
	}

	return(dest);
}
