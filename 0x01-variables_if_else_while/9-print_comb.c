#include <stdio.h>
#include <time.h>
/**
 * main - this is the main
 *
 * Return: 0 at the end
 */
int main(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
