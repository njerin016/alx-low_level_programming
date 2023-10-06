#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 * description: Print all the letters except q and e
 * Return: Always 0 success
 */

int main(void)
{
	char g;

	for (g = 'a'; g <= 'z'; g++)
	{
		if (g != 'e' && g != 'q')
			putchar(g);
	}
	putchar('\n');

	return (0);
}
