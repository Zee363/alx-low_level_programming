#include <stdio.h>
#include "main.h"

/**
 * _atoi -  convets a string to an integer
 * @s: string to be converted
 * Return: the int converted from a string
 */

int _atoi(char *s)
{
	int c, d, e, len, f, digit;

	c = 0;
	d = 0;
	e = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (c < len && f == 0)
	{
		if (s[c] == '-')
			++d;

		if (s[c] >= '0' && s[c] <= '9')
		{
			digit = s[c] - '0';
			if (d % 2)
				digit = -digit;
				e = e * 10 + digit;
				f = 1;
				if (s[c + 1] < '0' || s[c + 1] > '9')
					break;
				f = 0;
		}
		c++;
	}

	if (f == 0)
		return (0);

	return (e);
}

/**
 * main - a program that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
