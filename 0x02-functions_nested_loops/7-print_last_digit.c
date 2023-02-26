#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @r: the last digit of a number
 * Return: 0
 */
int print_last_digit(int r)
{
	int s;

	s = (r % 10);
	if (s < 0)
	{
		s = (-1 * s);
	}
	_putchar(s + '0');
	return (s);
}

