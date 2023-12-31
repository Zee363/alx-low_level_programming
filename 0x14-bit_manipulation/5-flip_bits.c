#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int c, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (c = 63; c >= 0; c--)
	{
		current = exclusive >> c;
		if (current & 1)
			count++;
	}

	return (count);
}
