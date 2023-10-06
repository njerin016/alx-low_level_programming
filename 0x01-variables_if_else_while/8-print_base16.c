#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: Always 0 success
 */

int main(void)
{
	int num;
	char lett;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
	}
	for (lett = 'a'; lett <= 'f'; lett++)
	{
		putchar(lett);
	}

	putchar('\n');

	return (0);
}
