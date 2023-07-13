#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to
 * a 2 dimensional array of integers
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int c, d, e, f;
	int **b;

	if (width <= 0 || height <= 0)
		return (NULL);

	b = malloc(sizeof(int *) * height);

	if (b == NULL)
	{
		free(b);
		return (NULL);
	}
	for (c = 0; c < height; c++)
	{
		b[c] = malloc(sizeof(int) * width);

		if (b[c] == NULL)
		{
			for (d = c;  d >= 0; d--)
				free(b[d]);

			free(b);
			return (NULL);
		}
	}

	for (e = 0; e < height; e++)
	{
		for (f = 0; f < width; f++)
			b[e][f] = 0;
	}

	return (b);
}
