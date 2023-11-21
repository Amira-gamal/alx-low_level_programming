#include "lists.h"

/**
 * print_listint - prints the elements of a listint_t list
 * @h: constant pointer type list_t
 * Return: the numbers of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	 while (h != NULL)
	 {
		 printf("%d\n", h->n);
		 h = h->next;
		 count++;
	 }
	 return (count);
}
