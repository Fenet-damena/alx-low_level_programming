#include <stdlib.h>
#include <time.h>
/**
 * main - this is the main
 *
 * Return: 0 at the end
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastdigit =n%10;

	return (0);
}
