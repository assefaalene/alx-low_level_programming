#include "main.h"

/**
 * _putchar - prints the number from 0 to 100
 * @c: number to be printed
 * Return: 0
 */

int _putchar(char c)
{
	char c;

	for (c = 1; c <= 100; i++)
	{
		if (c % 15 == 0)
			_putchar("FizzBuzz\t");
		else if ((c % 3) == 0)
			_putchar("Fizz\t");
		else if ((c % 5) == 0)
			_putchar("Buzz\t");
		else
			_putchar("%d\t", c);
	}
	return (0);
}
