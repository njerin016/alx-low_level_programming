#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: function input
 * @n: function input
 * Return: reversed content
 */

void reverse_array(int *a, int n)
{
	int b, c, d;

	c = 0;
	d = n - 1;
	while (c < d)
	{
		b = *(a + c);
		*(a + c) = *(a + d);
		*(a + d) = b;
		c++;
		d--;
	}
}
