#include <stdio.h>

/**
 * main - A program that prints out single digit
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		printf("%d", a);
	putchar('\n');
	return (0);
}
