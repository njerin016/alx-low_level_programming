#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: argument count
 * @argv: the arguments
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int idx;

	for (idx = 0; idx < argc; idx++)
	{
		printf("%s\n", argv[idx]);
	}
	return (0);
}
