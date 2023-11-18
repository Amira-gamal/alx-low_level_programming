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
	list_t *x;
	size_t n;

	x = malloc(sizeof(list_t));
	if (x == NULL)
		return (NULL);

	x->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	x->len = n;
	x->next = *head;
	*head = x;

	return (*head);
}
