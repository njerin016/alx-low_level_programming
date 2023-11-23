#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: count of arguments
 * @argv: the arguments
 *
 * Return: 0 success, 1
 * If one of the number contains symbols that are not digits
 */

int main(int argc, char *argv[])
{
	int add = 0;
	int idx;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (idx = 1; idx < argc; idx++)
		{
			int j;

			for (j = 0; argv[idx][j] != '\0'; j++)
			{
				if (!isdigit(argv[idx][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(argv[idx]);
		}
		printf("%d\n", add);
		return (0);
	}
}
