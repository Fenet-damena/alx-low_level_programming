#include <stdio.h>
#include "lists.h"

/**
 * print_list -  function that prints all the elements of a linked list
 * @po: pointer
 * Author:fenet damena
 * Return:  number of nodes printed
 */
size_t print_list(const list_t *po)
{
	size_t k = 0;

	while (po)
	{
		if (!po->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", po->len, po->str);
		po = po->next;
		k++;
	}

	return (k);
}

