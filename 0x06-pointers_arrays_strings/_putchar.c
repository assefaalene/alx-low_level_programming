#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * return: 1
 */

int _putchar(char c)
{
	return (write (1, &c, 1));
}
