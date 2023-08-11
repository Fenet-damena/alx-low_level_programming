#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - this is the main functon
 *
 * Return: 0 at the end
 */
int main(void)
{	int n;

	int lastdigi;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigi = n % 10;

	if (lastdigi > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdigi);
	if (lastdigi == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastdigi);
	if (lastdigi < 6 && lastdigi != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigi);
	return (0);
}
