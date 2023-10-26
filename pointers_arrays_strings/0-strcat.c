#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *
 * @dest: string
 *
 * @src: string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (src[x] != '\0')
	{
		x++;
	}

	while (dest[y] != '\0')
	{
		y++;
	}

	int z = x + y;
	int count = y + 1;
	int count1 = 0;

	for (i = y; i <= z; i++)
	{
		dest[count] = src[count1];
		count++;
		count1++;
	}

	return (dest);


}
