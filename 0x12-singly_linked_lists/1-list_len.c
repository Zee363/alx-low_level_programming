#include "lists.h"
#include <stdio.h>

/**
 * list_len - a function that returns the number of
 * elements in a linked list_t list
 * @h: pointer to the list_t list
 * Return: number of eleents in h
 */

size_t list_len(const list_t *h)
{
	size_t k = 0;

	while (h)
	{
		k++;
		h = h->next;
	}
	return (k);
}
