#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERR_MSG "Error"

/**
 * is_digit - hecks if a string contains a non-digit char
 * @s: string to be checked
 * Return: 0 if a non-digit is found, 1 if otherwise
 */

int is_digit(char *s)
{
	int c = 0;

	while (s[c])
	{
		if (s[c] < '0' || s[c] > '9')
			return (0);
		c++;
	}
	return (1);
}

/**
 * _strlen - returns the length of the string
 * @s: string to be checked
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}

/**
 * errors - handles errors for main
 */

void error(void)
{
	printf("Error\n");
	exit(98);
}

/** main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, c, carry, digit1, digit2, *result, b = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		error();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (c = 0; c <= len1 + len2; c++)
		result[c] = 0;
	for (len1 = len1 - 1 ; len1 >= 0; len--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = +strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;

			if (carry > 0)
				result[len1 + len2 + 1] += carry;

		}
		for (c = 0; c < len - 1; c++)
		{
			if (result[c])
				b = 1;
			if (b)
				_putchar(result[c] + '0');
		}
		if (!b)
			_putchar('0');
		_putchar('\n');
		free(result);
		return (0);
	}
	return (980);
}
