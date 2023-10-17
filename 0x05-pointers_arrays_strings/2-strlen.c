#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: function input
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int idx;

	for (idx = 0; s[idx] != '\0'; idx++)
		;

	return (idx);
}
