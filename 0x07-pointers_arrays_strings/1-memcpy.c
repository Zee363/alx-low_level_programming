#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @src: bytes from memory area
 * @dest: to memory area
 * @n: function copies
 * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c = 0;

	while (c < n)
	{
		dest[c] = src[c];
		c++;
	}

	return (dest);
}
