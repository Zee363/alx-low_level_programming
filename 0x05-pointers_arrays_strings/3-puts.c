#include "main.h"

/**
 * _puts - A function that prints a string,followed by a new line,
 * to stdout
 * @str: string that is to be printed
 *Return: string and a new line
 */

void _puts(char *str)
{
	int f = 0;

	while (str[f])
	{
		_putchar(str[f]);
		f++;
	}
	_putchar('\n');
}
