#include "main.h"
/**
 * _islower - check if char is in lower case
 * @c: THE CHAR TO CHECKED
 * Return: 1if lower case ,other wise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
