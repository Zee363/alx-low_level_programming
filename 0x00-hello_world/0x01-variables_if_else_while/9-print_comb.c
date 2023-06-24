#include <stdio.h>

/**
 * main - A program that prints all possible combinations of single numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int e;

	for (e = 48; e <= 57; e++)
	{
		putchar(e);
		if (e == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
