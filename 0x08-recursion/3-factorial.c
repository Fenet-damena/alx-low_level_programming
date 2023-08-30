#include <stdio.h>
#include "main.h"
/**
 * factorial - return factorial of an number
 * @n: is a number that given
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
	return (0);
}


