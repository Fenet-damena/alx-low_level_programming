#include "lists.h"

/**
 * print_listint – print elment of the list
 * @h: linked list 
 *
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t k = 0;

	while (h)
	{
		printf("%d\n", h->n);
		k++;
		h = h->next;
	}

	return (k);
}

