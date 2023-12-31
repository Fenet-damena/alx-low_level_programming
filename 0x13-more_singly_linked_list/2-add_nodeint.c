#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of a linked list
 * @head: pointer to first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *k;

	k = malloc(sizeof(listint_t));
	if (!k)
		return (NULL);

	k->n = n;
	k->next = *head;
	*head = k;

	return (k);
}


