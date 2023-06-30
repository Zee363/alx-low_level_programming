#include "main.h"

/**
 * string_toupper - a function that changes all lowercase
 * letters of a string to uppercase
 * @t: pointer
 * Return: t
 */

char *string_toupper(char *t)
{
	int h;

	h = 0;
	while (t[h] != '\0')
	{
		if (t[h] >= 'a' && t[h] <= 'z')
			t[h] = t[h] - 32;
		h++;
	}
	return (t);
}
