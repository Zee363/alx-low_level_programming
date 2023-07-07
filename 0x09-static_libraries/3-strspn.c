#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: input value
 * @accept: input value
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int m = 0;
	int h;

	while (*s)
	{
		for (h = 0; accept[h]; h++)
		{
			if (*s == accept[h])
			{
				m++;
				break;
			}
			else if (accept[h + 1] == '\0')
				return (m);
		}
		s++;
	}
	return (m);
}
