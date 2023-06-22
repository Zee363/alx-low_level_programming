#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n: Input number is an integer
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	int c;

	c = n % 10;
	if (n < 0)
	{
		_putchar(-c + 48);
		return (-c);
	}
	else
	{
		_putchar(c + 48);
		return (c);
	}
}
