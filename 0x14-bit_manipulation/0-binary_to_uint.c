#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: string containing binary number
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int c;
	unsigned int decimal_value = 0;

	if (!b)
		return (0);

	for (c = 0; b[c]; c++)
	{
		if (b[c] < '0' || b[c] > '1')
			return (0);
		decimal_value = 2 * decimal_value + (b[c] - '0');
	}

	return (decimal_value);
}
