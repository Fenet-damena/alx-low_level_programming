#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	int length = 0;

	int i,;

	char t;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = 0 ; i < length ; i++)
	{
		length--;
		t = s[i];
		s[i] = s[length];
		s[length] = t;
	}
}


