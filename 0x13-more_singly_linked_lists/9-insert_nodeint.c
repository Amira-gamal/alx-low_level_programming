#include "lists.h"

/**
 * insert_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer
 * @idx: index
 * @n: content
 * Return: the address of the node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *y = malloc(sizeof(listint_t));
	listint_t *x =  *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && x != NULL; i++)
		{
			x = x->next;
		}
	}

	if (x == NULL && idx != 0)
		return (NULL);
	if (y == NULL)
		return (NULL);

	y->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = y;
	}
	else
	{
		y->next = x->next;
		x->next = y;
	}

	return (y);
}
