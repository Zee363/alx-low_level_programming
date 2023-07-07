#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: the string to be used
 * Return: integer
 */

int _atoi(char *s)
{
	int sign = 1, c = 0;
	unsigned int res = 0;

	while (!(s[c] <= '9' && s[c] >= '0') && s[c] != '\0')
	{
		if (s[c] == '-')
			sign *= -1;
		c++;
	}
	while (s[c] <= '9' && (s[c] >= '0' && s[c] != '\0'))
	{
		res = (res * 10) + (s[c] - '0');
		c++;
	}
	res *= sign;
	return (res);
}
