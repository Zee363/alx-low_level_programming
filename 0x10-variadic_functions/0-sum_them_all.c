#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: the number of parameters passed to the function
 * @...: a variable number of parameters to calculate the sum of
 * Return: if n == 0 - 0
 * otherwise - sum of all parametrs
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int c, sum = 0;

	va_start(ap, n);

	for (c = 0; c < n; c++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
