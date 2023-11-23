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

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	while (i <= index)
	{
		switch (i)
		{
			case i:
				if (i == index)
					return (n & 1);
				break;
		}

		n >>= 1;
		i++;
	}

	return (-1);
}

