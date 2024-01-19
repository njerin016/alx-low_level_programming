#include "main.h"

/**
 * _abs - gets the absolute value of an integer
 * @n: function input
 *
 * Return: absolute value
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
