#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: number to be printed in binary
 */

void print_binary(unsigned long int n)
{
	int c, count = 0;
	unsigned long int current;

	for (c = 63; c >= 0; c--)
	{
		current = n >> c;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
