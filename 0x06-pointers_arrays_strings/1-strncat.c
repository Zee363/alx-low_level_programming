#include "main.h"

/**
 * _strncat -  A function that concatenates two strings
 * @dest: Input value
 * @src: Input value
 * @n: Input value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c;
	int d;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	d = 0;
	while (d < n && src[d] != '\0')
	{
	dest[c] = src[d];
	c++;
	d++;
	}
	dest[c] = '\0';
	return (dest);
}
