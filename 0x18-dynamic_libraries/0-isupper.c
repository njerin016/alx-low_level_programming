#include "main.h"

/**
 * _isupper - checks for upper cases
 * @c: function input
 *
 * Return: 1 if uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
