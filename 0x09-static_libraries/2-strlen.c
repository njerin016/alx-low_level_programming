#include "main.h"

/**
 * _strlen - finds the length of a string
 * @s: function input
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
