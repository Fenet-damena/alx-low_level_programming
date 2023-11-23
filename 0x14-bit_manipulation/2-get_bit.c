#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: unsigned long int
 * @index: index
 *
 * Return: value of the bit at the given index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	for (i = 0; i <= index; i++)
	{
		switch (i)
		{
			case 0:
				if (i == index)
					return (n & 1);
				break;
			default:
				n >>= 1;
		}
	}

	return (-1);
}

