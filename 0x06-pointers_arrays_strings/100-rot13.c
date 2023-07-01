#include <stddef.h>
#include "main.h"
#include <stdio.h>

/**
 * rot13 - a function that encodes a string using rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int y;
	int k;
	char data[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] =
"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (y = 0; s[y] != '\0'; y++)
	{
		for (k = 0; k < 52; k++)
		{
			if (s[y] == data[k])
			{
				s[y] = datarot[k];
				break;
			}
		}
	}
	return (s);
}
