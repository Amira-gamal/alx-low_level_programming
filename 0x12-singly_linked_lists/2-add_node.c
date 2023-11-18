#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of list
 * @head: first element of list
 * @str: string to duplicate
 * Return: address of new element or NULL if fail
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (str != NULL)
		return (NULL);
	if (new_node == NULL)
		return (NULL);
	new_node->next = *head;
	new_node->str = strdup(str);
	if (new_node->str)
	{
		for (i = 0; new_node->str[i]; ++i)
			;
	}
	new_node->len = i;
	*head = new_node;
	return (new_node);
}
