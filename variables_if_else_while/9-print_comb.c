#include <stdio.h>

/**
 * main - Printsall possible combinations of single digit numbers
 *
 * Return: 0
 */

int main(void)
{
	int x;

	for (int x = 0; x <= 9; x++)
	{
		putchar('0' + x);
		putchar(' ,');
	}

	putchar('\n');

	return (0);
}

