#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	int length = 0;

	int i, j;

	char t;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = 0 ; j = length ; i < j ; i++ ; j--)
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;
	}
}


