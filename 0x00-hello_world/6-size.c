#include<stdio.h>
/**
 * main - this is main function
 *
 * Return: 0 at the end
 */
int main(void)
{	char a;
	int b;
	long int c;
	long long int d;
	float e;
	printf("size of a char: %lu byte(s) \n", sizeof(a));
	printf("size of an int: %lu byte(s) \n", sizeof(b));
	printf("size of a long int: %lu byte(s) \n", sizeof(c));
	printf("size of a long long int: %lu byte(s) \n", sizeof(d));
	printf("size of a flost: %lu byte(s) \n", sizeof(e));
}
