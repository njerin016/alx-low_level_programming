#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - calculates the sum of all its parameters.
 * @n: function input
 *
 * Return: returns the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int total = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
		total += va_arg(valist, const unsigned int);

	va_end(valist);

	return (total);
}
