#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: numbers of byte to copy from s2
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int sum;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	sum = strlen(s1) + strlen(s2);

	str = (char *) malloc(sum + 1);

	if (str)
	{
		str = strcpy(str, s1);
		str = strncat(str, s2, n);

		return (str);
	}

	return (NULL);

	
}
