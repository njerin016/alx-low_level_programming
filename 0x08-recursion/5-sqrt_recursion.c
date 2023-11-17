#include "main.h"

/**
 * square_root - gives the square root of a number
 * @n: function input
 * @b: function input
 *
 * Return: the square root
 */

int square_root(int n, int b)
{
	if (n > b / 2)
		return (-1);
	else if (n * n == b)
		return (n);
	return (square_root(n + 1, b));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: function input
 *
 * Return: the natural sqr root of a number, or
 * -1 if n does not have a natural square root.
 */

int _sqrt_recursion(int n)
{
        if (n == 0 || n == 1)
                return (n);
        return (square_root(0, n));
}
