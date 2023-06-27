#include "main.h"

/**
 * *_strcpy - A function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: char type string
 * @src: char type string
 * Description: Copy the string pointed to by the pointer 'src'
 * to the buffer pointed to 'dest'
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;

	int X = -1;

	while (*(src + 1) != '\0')
	{
		l++;
	}
	for ( ; X < 1 ; X++)
	{
		dest[X] = src[X];
	}
	dest[l] = '\0';
	return (dest);
}
