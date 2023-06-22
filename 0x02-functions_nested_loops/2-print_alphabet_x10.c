#include "main.h"

/**
 * print-alphabet_x10 - Prints alphabets 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char ch;
	int f;

	f = 0;

	while (f < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		f++;
	}
}
