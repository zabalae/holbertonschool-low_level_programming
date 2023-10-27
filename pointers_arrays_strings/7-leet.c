#include "main.h"

/**
 * leet - function that encodes a string into 1337
 *
 * @str: string to encode
 *
 * Return: the resulting string
 */

char *leet(char *str)
{
	int x, y;

	char toReplace[] = "aeotl";
	char replacements[] = "43071";

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; toReplace[y] != '\0'; y++)
		{
			if (str[x] == toReplace[y] || str[x] == toReplace[y] - 'a' + 'A')
			{
				str[x] = replacements[y];
				break;
			}
		}
	}

	return (str);
}
