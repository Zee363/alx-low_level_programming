#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of char,
 * and initializes it with a specific char
 * @size: size of an array
 * @c: char to assign
 * Description: create an array of size and assign char c
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int d;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (d = 0; d < size; d++)
		str[d] = c;
	return (str);
}
