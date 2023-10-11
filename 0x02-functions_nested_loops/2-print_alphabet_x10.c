#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 */

void print_alphabet_x10(void)
{
	int num;
	char g;

	for (num = 0; num < 10; num++)
	{
		for (g = 'a'; g <= 'z'; g++)
			_putchar(g);

		_putchar('\n');
	}
}
