#include "main.h"

/**
 * print_line - A function that draws a straight line in the terminal
 * @n: Number of times
 * Return: Always 0
 */

void print_line(int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
