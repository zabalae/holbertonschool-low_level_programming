#include <stdio.h>

/**
 * main - prints all the numbers of base 16
 *
 * Return: 0
 */

int main(void)
{
	char letter;
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar('0' + number);
	}

	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
