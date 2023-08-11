#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - this is the main functon
 *
 * Return: (0) at the end
 */
int main(void)
{	int n;

	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;

	if (lastdigit > 5)
		printf("and is greater than 5\n");
	if (lastdigit == 0)
		printf("and is 0\n");
	if (lastdigit < 6)
		if (lastdigit != 0)
			printf("and is less than 6 and not 0\n");
	return (0);
}
