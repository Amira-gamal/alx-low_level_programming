#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: pointer to the head
 * @index: index
 * Return: the address of the node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
