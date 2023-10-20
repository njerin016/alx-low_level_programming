#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string to be printed
 * Return: always 0 success
 */

void print_rev(char *s)
{
	int idx;

	for (idx = 0; s[idx] != '\0'; idx++)
		;
	for (idx = idx - 1; s[idx] != '\0'; idx--)
		_putchar(s[idx]);

	_putchar('\n');
}
