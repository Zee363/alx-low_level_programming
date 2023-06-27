#include "main.h"
#include <stdio.h>

/**
 * print_array - A function that prints n elements of an array of integers,
 * followed by a new line
 * @c: This is the output array
 * @n: This is the length of the array
 *
 *
 */

void print_array(int *c, int n)
{

	int index_of_array;

	for
	(index_of_array = 0;
	index_of_array < n;
	index_of_array++)
	{
		printf("%d", c[index_of_array]);
		if (index_of_array != (n - 1))
		{
			printf(",");
		}
	}
	putchar('\n');
}
