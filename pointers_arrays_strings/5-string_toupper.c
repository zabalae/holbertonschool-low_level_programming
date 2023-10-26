#include "main.h"

/**
 * string_toupper - function that changes a string to uppercase
 *
 * @str: string to change
 *
 * Return: char
 */

char *string_toupper(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		{
		str[x] = str[x] - 32;
		}
	}

	return (str);
}
