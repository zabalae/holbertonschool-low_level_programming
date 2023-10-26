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
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[x] == 'a' || str[x] == 'A')
		{
			str[x] = '4';
		}
		
		else if (str[x] == 'e' || str[x] == 'E')
		{
            		str[x] = '3';
		}

        	else if (str[x] == 'o' || str[x] == 'O')
		{
            		str[x] = '0';
		}

        	else if (str[x] == 't' || str[x] == 'T')
		{
            		str[x] = '7';
		}

        	else if (str[x] == 'l' || str[x] == 'L')
		{
            		str[x] = '1';
		}
	}

	return (str);
}
