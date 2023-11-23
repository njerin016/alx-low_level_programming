#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: the arguments
 *
 * Return: 0 success,
 * 1 If the program does not receive two arguments
 */

int main(int argc, char *argv[])
{       
        int mult = 1;
        int idx;

        if (argc == 3)
	{
		for (idx = 1; idx < argc; idx++)
		{
			mult = mult * atoi(argv[idx]);
		}
		printf("%d\n", mult);
		return (0);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
}
