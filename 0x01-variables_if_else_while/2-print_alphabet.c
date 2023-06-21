#include <stdlib.h>
#include <stdio.h>

/**
 * main - A program that prints alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
