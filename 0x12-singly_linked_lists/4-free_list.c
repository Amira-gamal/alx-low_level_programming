#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: the head of the list to free
 * Return: void
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
