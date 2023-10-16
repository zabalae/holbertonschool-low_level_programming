#include <stdio.h>

/**
 * main- Printsall single digit numbers of base 10
 *
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar('0' + x);
	}

	putchar('\n');

	return (0);
}
