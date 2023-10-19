#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings.
 * @dest: function input
 * @src: function input
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int length1;
	int length2;
	int i;

	length1 = 0;
	length2 = 0;

	while (src[length1] != '\0')
		length1++;

	while (dest[length2] != '\0')
		length2++;

	for (i = 0; i <= length1; i++)
	{
		dest[length2] = src[i];
		length2++;
	}
	return (dest);
}
