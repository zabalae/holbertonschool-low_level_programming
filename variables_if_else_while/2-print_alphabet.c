#include <stdio.h>

/**
 * main- Print alphabet letters
 *
 * Return: 0 Succesful
 */

int main (void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}

	putchar('\n');

	return (0);
}
