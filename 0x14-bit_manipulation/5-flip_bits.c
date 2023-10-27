#include "main.h"

/**
 * flip_bits - returns the number of bits
 * need to flip to get from one number to anothe
 * @n: num1
 * @m: num2
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nb;

	for (nb = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nb++;
	}

	return (nb);
}

