#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: string to be printed
 * Return: 0 success
 */

void puts2(char *str)
{
	int idx;

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		if ((idx % 2) == 0)
		{
			_putchar(str[idx]);
		}
	}
	_putchar('\n');
}
