#include "main.h"
#include <stddef.h>

/**
 * _strchr - a function that locates a character in a string
 * @s: input value
 * @c: input value
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int d = 0;

	for (; s[d] >= '\0'; d++)
	{
		if (s[d] == c)
			return (&s[d]);
	}
	return (0);
}
