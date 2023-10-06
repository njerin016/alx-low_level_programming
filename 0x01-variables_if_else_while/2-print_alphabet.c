#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always 0 success
 */

int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		putchar(b);
	}
	putchar('\n');

	return (0);
}
