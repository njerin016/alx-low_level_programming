#include "main.h"

/**
 * _puts - displays a string
 * @s: function input
 *
 * Return: 0 success
 */

void _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
