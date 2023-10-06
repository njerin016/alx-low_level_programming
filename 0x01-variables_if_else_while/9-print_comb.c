#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 success
 */

int main(void)
{
	int j;

	for (j = 0; j <= 9; j++)
	{
		putchar((j % 10) + '0');

		if (j == 9)
		{
			continue;
		}

		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
