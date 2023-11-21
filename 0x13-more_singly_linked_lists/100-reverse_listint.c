#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: Pointer
 * Return: A pointer
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL, *current;

	while (*head != NULL)
	{
		current = *head;
		next = current->next;
		current->next = prev;
		prev = current;
		*head = next;
	}
	*head = prev;
	return (*head);
}
