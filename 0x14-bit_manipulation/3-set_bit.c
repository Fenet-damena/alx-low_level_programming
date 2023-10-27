#include "main.h"

/**
 * set_bit - sets the value
 * at a given inex
 * @n: pointer of an unsigned
 * @index: index
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k;

	if (index > 63)
		return (-1);

	k = 1 << index;
	*n = (*n | k);

	return (1);
}

