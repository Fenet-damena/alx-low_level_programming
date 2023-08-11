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

	char  j;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (j = 'a' ; j <= 'f' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
