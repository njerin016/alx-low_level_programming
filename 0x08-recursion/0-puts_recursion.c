#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: function input
 *
 * Return: 0 success
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
