#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: function input
 * Return: ALways 0 success
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
