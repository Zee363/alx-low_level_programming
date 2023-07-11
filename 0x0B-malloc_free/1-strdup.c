#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory,which contains a copy of the string given as a parameter
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *ccc;
	int d, k = 0;

	if (str == NULL)
		return (NULL);
	d = 0;
	while (str[d] != '\0')
		d++;

	ccc = malloc(sizeof(char) * (d + 1));

	if (ccc == NULL)
		return (NULL);

	for (k = 0; str[k]; k++)
		ccc[k] = str[k];

	return (ccc);
}
