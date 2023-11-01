#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src to dest
 *
 * @dest: copy of the string in src
 *
 * @src: the string to be copied
 *
 * Return: char
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

	x = x + 1;

	for (y = 0; y < x; y++)
	{
		dest[y] = src[y];
	}

	return (dest);
}
