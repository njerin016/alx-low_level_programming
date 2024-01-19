#include "main.h"

/**
 * _memcpy - copies the memory area
 * @dest: function input
 * @src: function input
 * @n: function input
 * Return: the dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
