#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string input
 * return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s);
		_putchar(*s);
	}
	else
		_putchar('\n');
}
