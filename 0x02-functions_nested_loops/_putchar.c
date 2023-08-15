#include "main.h"
#include <unistd.h>
/**
 * _putchar  - write the character c
 * @c: the charcter to print
 *
 * Return: 0 at the end
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
