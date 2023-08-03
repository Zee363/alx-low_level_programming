#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 * Return: 0 for big, 1 for little
 */

int get_endianness(void)
{
	unsigned int c = 1;
	char *d = (char *) &c;

	return (*d);
}
