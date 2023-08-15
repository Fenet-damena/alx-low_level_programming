#include <stdlib.h>
#include <time.h>
/**
 * main - this is main function
 *
 * Return: 0 at the end
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2
	if (n > 0)
	{
		printf("is positive\n");
	}
	if (n == 0)
	{
		printf("is zero\n");
	}
	if (n < 0)
	{
		printf("is negative");
	}
	return (0);
}
