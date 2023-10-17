#include "_putchar.c"

void print_alphabet(void);
{
	char x;
	for(x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}

	_putchar('\n');

	return (0);
}
