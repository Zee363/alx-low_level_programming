#include "main.h"

/**
 * print-alphabet_x10 - Prints alphabets 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int e;
	int f;

	for (f = 1; e <= 10; e++)
	{
		for (f = 97; f <= 122; f++)
		{
			_putchar(f);
		}
		_putchar('\n');
	}
}
