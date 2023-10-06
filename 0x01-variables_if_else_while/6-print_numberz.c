#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 *
 * Return: Always 0 success
 */

int main(void)
{
	int mynum;

	for (mynum = 0; mynum <= 9; mynum++)
	{
		putchar((mynum % 10) + '0');
	}

	putchar('\n');

	return (0);
}
