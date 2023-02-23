#include "main.h"

/**
 * _isupper - checks the uppercase character
 * @c: the character to be checked
 * Return: 1 for uppercase or 0 for lowercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
