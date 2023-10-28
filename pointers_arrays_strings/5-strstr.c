#include "main.h"

/**
 * _strstr - function that locates a substring
 *
 * @haystack: the main string to be scanned
 *
 * @needle the small string to be searched with-in haystack string
 *
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (h == *n && *n != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}
	}

	return (0);
}
