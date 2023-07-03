#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int c;

for (c = 0; c < n; c++)
{
s[c] = b;
}

return (s);
}
