#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: input string
 * Return: nothing
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_strlen_recursion(s);
}
