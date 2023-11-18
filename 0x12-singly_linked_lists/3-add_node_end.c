#include "lists.h"

/**
 * add_node_end - adds node to end of a list
 * @head: pointer to pointer to head of list
 * @str: string to copy to node
 * Return: address of new element or NULL if failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *x, *y;
	size_t n;

	x = malloc(sizeof(list_t));
	if (x == NULL)
		return (NULL);

	x->str = strdup(str);
	n = 0;
	do {
		n++
	} while (str[n]);

	x->len = n;
	x->next = NULL;
	y = *head;

	if (y == NULL)
	{
		*head = x;
	}
	else
	{
		while (y->next != NULL)
			y = y->next;
		y->next = x;
	}

	return (*head);
}
