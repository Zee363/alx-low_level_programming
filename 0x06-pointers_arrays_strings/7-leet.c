#include "main.h"

/**
 * *leet - a function that encodes a string into 1337
 * @m: input value
 * Return: m value
 */

char *leet(char *m)
{
	int f, h;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (f = 0; m[f] != '\0'; f++)
	{
		for (h = 0; h < 10; h++)
		{
			if (m[f] == s1[h])
			{
				m[f] = s2[h];
			}
		}
	}
	return (m);
}
