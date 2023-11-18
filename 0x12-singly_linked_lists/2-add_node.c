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
	list_t *new_node;
	size_t n;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new_node->str = strdup(str);
	for (n = 0; str[n]; n++)
		;

	new_node->len = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
