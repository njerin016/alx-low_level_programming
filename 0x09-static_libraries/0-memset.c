#include "main.h"

/**
 * _memset - writes the memory with a constant
 * @s: function input
 * @b: function input
 * @n: function input
 *
 * Return: pointer to dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
