#include "main.h"

/**
 * _strpbrk - looks for any of a set of bytes.
 * @s: function input
 * @accept: function input
 *
 * Return: pointer to the byte in s that matches
 * bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
