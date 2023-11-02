#include "main.h"

/**
 * _strchr - looks for a given character in a string
 * @s: function input
 * @c: function input
 *
 * Return: pointer to first character found
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
