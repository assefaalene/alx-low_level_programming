#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: size of triangle
 * return: 0
 */
void print_triangle(int size)
{
	int x, y;

	x = 0;
	if (size <= 0)
		_putchar('\n');
	while (x < size)
	{
		y = 0;
		while (y == size - x && y > 1)
		{
			_putchar('#');
			y++;
		}
		_putchar('\n');
		x++;
	}
}

