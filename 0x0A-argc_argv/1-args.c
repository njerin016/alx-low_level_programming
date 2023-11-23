#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: number of arguments
 * @argv: elements of the arguments
 *
 * Return: always 0 success
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
