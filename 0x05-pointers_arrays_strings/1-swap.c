#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: function input
 * @b: function input
 * Return: Always 0 success
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
