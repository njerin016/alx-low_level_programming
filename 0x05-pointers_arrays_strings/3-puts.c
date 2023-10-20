#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: string to be printed
 * Return: always 0 success
 */

void _puts(char *str)
{
	int idx;

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		_putchar(str[idx]);
	}
	_putchar('\n');
}
