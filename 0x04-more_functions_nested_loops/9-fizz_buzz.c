#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * Description: for multiples of three print Fizz,
 * multiples of five print Buzz, and multiples of both three
 * and five print FizzBuzz.
 * Return: Always 0 success
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 15) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((a % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((a % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", a);
		}
	}
	printf("\n");

	return (0);
}
