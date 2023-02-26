#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int n, k;

	k = 1;
	while (k <= 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		k++;
		_putchar('\n');
	}
}

