#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: The pointer pointing to the string
 * Return: 0
 */

void rev_string(char *s)
{
	int length, Z, half;
	char temp;

	for (length = 0; s[length] != '\0'; length++);
	Z = 0;
	half = length / 2;

	while (half--)
	{
		temp = s[length - Z - 1];
		s[length - Z - 1] = s[Z];
		s[Z] = temp;
		Z++;
	}
}
