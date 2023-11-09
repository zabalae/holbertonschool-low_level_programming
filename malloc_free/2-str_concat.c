#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second tring
 * Return: contents of s1 followed by contents of s2
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int sum;

	sum = strlen(s1) + strlen(s2);

	str = (char *) malloc(sum + 1);

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	if (str)
	{
		str = strcpy(str, s1);
		str = strcat(str, s2);

		return (str);
	}


	return (NULL);

}
