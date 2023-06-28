#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints the numbers from 1 to 100,
 * followed by a new line
 * Description: prints the numbers 1 - 100 w/
 * Fizz for multiples of 3, Buzz for multiples of 5,
 * and FizzBuzz for multiples of both
 * Return: Always 0
 */

int main(void)
{
	int c;

	for (c = 1; c <= 100; c++)
	{
		if (c % 3 == 0 && c % 5 != 0)
		{
			printf("Fizz");
		} else if (c % 5 == 0 && c % 3 != 0)
		{
			printf("Buzz");
		} else if (c % 3 == 0 && c % 5 == 0)
		{
			printf("FizzBuzz");
		} else if (c % 5 == 1)
		{
			printf("%d", c);
		} else
		{	
			printf("%d", c);
		}
	}
	printf("\n");
	
	return (0);
}
