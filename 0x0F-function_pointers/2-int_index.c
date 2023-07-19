#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: array
 * @size: size of elems in array
 * @cmp: pointer to function of one of the 3 in main
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (c = 0; c < size; c++)
	{
		if (cmp(array[c]))
			return (1);
	}
	return (-1);
}
