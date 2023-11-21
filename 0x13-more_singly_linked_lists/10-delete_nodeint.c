#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at an index
 * @head: pointer
 * @index: index
 * Return: the address
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *i, *x = *head;
	unsigned int n;

	if (x == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(x);
		return (1);
	}

	for (n = 0; n < (index - 1); n++)
	{
		if (x->next == NULL)
			return (-1);
		x = x->next;
	}
	i = x->next;
	x->next = i->next;
	free(i);
	return (1);
}
