#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line.
 * Description: Numbers must be separated by comma
 *  followed by a space
 * @a: function input
 * @n: number of elements
 * Return: 0 success
 */

void print_array(int *a, int n)
{
	int idx;

	for (idx = 0; idx < n; idx++)
	{
		printf("%d", a[idx]);
		if (idx != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
