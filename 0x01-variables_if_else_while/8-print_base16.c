#include <stdio.h>

/**
 * main - A program that prints all numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char g;

	int h;

	g = 'a';
	h = 0;
	while
		(h < 10) {
			putchar(h + '0');
			h++;
		}
	while
		(g <= 'f') {
			putchar (g);
			g++;
		}
	putchar('\n');
	return (0);
}
