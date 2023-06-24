#include "main.h"

/**
 * print_alphabet - A program that prints alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int e;

	for (e = 97; e <= 122; e++)
	{
		_putchar(e);
	}

	_putchar('\n');
}
