#include "main.h"
/**
 * _isalpha - check if it is alphabet
 * @c: the char to be checked
 * Return: 1 if c is alpha else return 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

