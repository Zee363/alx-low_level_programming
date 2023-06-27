#include "main.h"

/**
 * puts2 - A function that prints every other character of a string,
 * starting with the character,followed by a new line
 * @str: string of reference
 * Return: 0
 */

void puts2(char *str)
{
	int X = 0;

	while (str[X] != '\0')
	{
		if (X % 2 == 0)
		{
			_putchar(str[X]);
		}
		X++;
	}
	_putchar('\n');
}
