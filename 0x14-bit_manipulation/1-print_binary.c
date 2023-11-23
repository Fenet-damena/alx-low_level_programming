#include "main.h"

/**
 * print_binary - prints the binary representation of the given
 * of a number.
 * @n: unsigned long int.
 *
 * Return: no return.
 */
void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);

		switch (n & 1)
		{
			case 0:
				_putchar('0');
				break;
			case 1:
				_putchar('1');
				break;
		}
	}
	else
	{
		_putchar('0');
	}
}
