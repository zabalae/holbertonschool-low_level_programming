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
	int i, count, z, count1;

	while (src[x] != '\0')
	{
		x++;
	}

	while (dest[y] != '\0')
	{
		y++;
	}
	z = n + y + 1;
	count = y;
	count1 = 0;

	for (i = y; i <= z; i++)
	{
		dest[count] = src[count1];
		count++;
		count1++;
	}

	return (dest);
}
