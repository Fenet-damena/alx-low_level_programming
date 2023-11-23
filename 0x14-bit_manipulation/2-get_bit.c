#include "main.h"

/**
 * get_bit - returns the value of a bit
 * index.
 * @n: unsigned long int
 * @index: index
 *
 * Return: value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (n == 0 && index < 64)
		return (0);

	while (i <= 63)
	{
		switch (index)
		{
			case i:
				return (n & 1);
		}

		n >>= 1;
		i++;
	}

	return (-1);
}

