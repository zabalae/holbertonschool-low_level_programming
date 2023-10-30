#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 *
 * @s: string
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int *x = 0;

	if (*s == '\0')
	{
		return (x);
	}

	_strlen_recursion(s + 1);

	x = s;

	return (x);
}
