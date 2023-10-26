#include "main.h"

/**
 * cap_string - function that capitalizes everey word of a string
 *
 * @str: string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *str)
{
	int x, y;

	char z[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (x = 0; str[x] != '\0'; x++)
	{
		if (x == 0 && str[x] >= 'a' && str[x] <= 'z')
			str[x] -= 32;

		for (y = 0; y < 13; y++)
		{
			if (str[x] == z[y])
			{
				if (str[x + 1] >= 'a' && str[x + 1] <= 'z')
				{
					str[x + 1] -= 32;
				}
			}
		}
	}

	return (str);
}
