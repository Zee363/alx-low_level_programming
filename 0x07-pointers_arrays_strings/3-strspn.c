#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: the string to be searched
 * @accept: the prefix to be measured
 * Return: the number of bytes in s
 * which consits of only bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int  index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}

			else if (accept[index + 1] == '\0')
				return (bytes);
		}

		s++;
	}
	return (0);
}
