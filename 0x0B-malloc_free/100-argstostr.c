#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int c, d, e = 0, f = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (c = 0; c < ac; c++)
	{
		for (d = 0; av[c][d]; d++)
			f++;
	}
	f += ac;

	str = malloc(sizeof(char) * f + 1);
	if (str == NULL)
		return (NULL);
	for (c = 0; c < ac; c++)
	{
	for (d = 0; av[c][d]; d++)
	{
		str[e] = av[c][d];
		e++;
	}
	if (str[e] == '\0')
	{
		str[e++] = '\n';
	}
	}
	return (str);
}
