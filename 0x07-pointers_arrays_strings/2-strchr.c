#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: function input
 * @c: function input
 *
 * Return: pointer to the first occurrence of the character c
 */

char *_strchr(char *s, char c)
{

	if (*s == '\0')
		return (s);
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
	       s++;
	}
	if (c == '\0')
		return (s);
	return ('\0');
}
