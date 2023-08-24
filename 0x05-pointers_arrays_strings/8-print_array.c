#include "main.h"
/**
 * print_array - is to print arry
 * @a: is arru=y to be  printed
 * @n: is number of element
 * Return: elment in arry
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(",");
			putchar(' ');
		}
		 i++;
	}
	putchar('\n');
}


