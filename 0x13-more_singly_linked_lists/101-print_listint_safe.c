#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - a function that counts the number
 * of unique nodes in a looped listint_t linked list
 * @head: pointer to the head of the listint_t to be checked
 * Return: if the list is not looped - 0
 * Otherwise -  the nnumber of unique nodes in the list
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *donkey, *dog;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	donkey = head->next;
	dog = (head->next)->next;

	while (dog)
	{
		if (donkey == dog)
		{
			donkey = head;
			while (donkey != dog)
			{
				nodes++;
				donkey = donkey->next;
			}

			return (nodes);
		}

		donkey = donkey->next;
		dog = (dog->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - a function that prints a listint_t linked list
 * @head: pointer to the head of the listint_t linked list
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
