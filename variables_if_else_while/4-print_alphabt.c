#include <stdio.h>

/**
 * main- print alphabeth except q and e
 *
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'e')
		{
			a++;
		}
		else if (a == 'q')
		{
			a++;
		}

	}
	
	putchar ('\n');

	return (0);
}
