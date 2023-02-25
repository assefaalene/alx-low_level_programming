#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: size of triangle
 * return: 0
 */
void print_triangle(int size)
{
	int x, y;

	y = 0;
	if (size <= 0)
		_putchar('\n');
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		y++;
	}
}

