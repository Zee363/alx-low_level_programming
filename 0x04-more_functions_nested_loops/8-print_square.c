#include "main.h"

/**
 * print_square - A function that print a square,followed by a new line
 * @size: size of the square
 * Return: void
 */

void print_square(int size)
{
	int e, f;

	if (size <= 0)
		_putchar('\n');

	for (e = 0; e < (size); e++)
	{
		for (f = 0; f < (size); f++)
		{
			_putchar('#');
		}
	}
	_putchar('\n');
}
