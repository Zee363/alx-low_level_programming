#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: starting memory of address to be filled
 * @b: desired value
 * @n: number of bytes to be changed
 * Return: changed array with a new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int c = 0;

	for (; n > 0; c++)
	{
		s[c] = b;
		n--;
	}
	return (s);
}
