#include "main.h"

/**
 * print_alphabet - A program that prints alphabets in lowercase
 *
 * Return: 0
 */

void print_alphabet(void)

{
	char e = 'a';

	while (e <= 'z')
	{
		_putchar(e);
		e++;
	}

	_putchar('\n');
	return (0);
}
