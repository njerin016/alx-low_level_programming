#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int total;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
		total += va_arg(valist, const unsigned int);

	va_end(valist);

	return (total);
}
