#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: function input
 * Return: 0 success
 */

void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			for (y = 1; y <= n; y++)
			{
				if (x == y)
				{
					_putchar(92);
					break;
				}
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
