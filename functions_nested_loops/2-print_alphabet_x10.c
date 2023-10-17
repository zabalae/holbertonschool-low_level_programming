#include "main.h"

/**
 * print_alphabet_x10- Prints alphabet 10 times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int num = 1;

	while (num <=10)
	{
		char x;

		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
		num++;
	}
}
