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

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
