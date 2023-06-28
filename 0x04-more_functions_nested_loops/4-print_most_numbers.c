#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9
 * Description: Prints nymbers except 2 and 4
 * Return: The numbers since 0 up to 9
 */

void print_more_numbers(void)
{
	int d = 0;

	for (; d <= 9; d++)
	{
	if (d == 2 || d == 4)
	{
	continue;
	}
	_putchar(d + '0');
	{
	}
	_putchar('\n');
}
