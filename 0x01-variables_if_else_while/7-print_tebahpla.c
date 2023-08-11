#include <stdio.h>
#include <time.h>
/**
 * main - this is the main
 *
 * Return: 0 at the end
 */
int main(void)
{
	char  i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
