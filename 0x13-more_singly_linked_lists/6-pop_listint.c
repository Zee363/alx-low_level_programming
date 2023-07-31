#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 * @head: pointer to the first element in the linked list
 * Return: data inside the elents that was deleted
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int numbers;

	if (!head || !*head)
		return (0);

	numbers = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (numbers);
}
