#include <stdio.h>

/**
 * main - A program that prints all possible combinations of single numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c;

	for (c = 48; c < 57; c++)
	{
		putchar(c);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
