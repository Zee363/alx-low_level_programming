#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 * Return: pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	unsigned int c;

	if (new_size == old_size)
		return (ptr);
	if (ptr1 == NULL)
	{
		ptr1 = malloc(new_size);
		
		if (ptr1 == NULL)
			return (NULL);

		return (ptr1);
	}
	else
	{

		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}


	ptr1 = malloc(new_size);

	if (ptr1 == NULL)
		return (NULL);

	for (c = 0; c < old_size && c < new_size; c++)
	{
		ptr1[c] = ((char *) ptr)[c];
	}

	free(ptr);
	return (ptr1);
}
