#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - a function that returns the value of
 * x raised to the power of y
 * @x: input value to raise
 * @y: input value power
 * Return: Always 0 (Success)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
