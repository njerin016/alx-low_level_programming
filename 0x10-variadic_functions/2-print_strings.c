#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: function input
 *
 * Return: 0 always success
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;

	if (separator == NULL)
		separator = "";

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(strings, char *));

		if (n == i + 1)
			break;
		printf("%s", separator);
	}
	printf("\n");

	va_end(strings);
}
