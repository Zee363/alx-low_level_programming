#include <stdlib.h>
#include <stdio.h>

/**
 * main - A program that prints alphabets in both cases
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char e;

	char f;

	e = 'a';
	f = 'A';
	while
		(e <= 'z') {
			putchar(e);
			e++;
		}
	while
		(f <= 'Z') {
			putchar(f);
			f++;
		}
	putchar('\n');
	return (0);
}
