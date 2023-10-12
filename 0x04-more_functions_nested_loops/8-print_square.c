#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: function input
 * Return: Always 0 success
 */

void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
