#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - returns the sum of a and b. 
 * @a: function input
 * @b: function input
 *
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b.
 * @a: function input
 * @b: function input
 * Return: subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns multiplication of two numbers
 * @a: function input
 * @b: function input
 * Return: the multtiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division
 * @a: function input
 * @b: function input
 * Return: the division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division
 * @a: function input
 * @b: function input
 * Return: the modulus
 */
int op_mod(int a, int b)
{
	return (a % b);
}
