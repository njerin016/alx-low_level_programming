#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: function input
 * @src: function input
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
