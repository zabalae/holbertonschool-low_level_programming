#include <stdio.h>

/**
 * main - Printsall possible combinations of single digit numbers
 *
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar('0' + x);
		
		if (x <= 8)
		{
		putchar(',');
		putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

