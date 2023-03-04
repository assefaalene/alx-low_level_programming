#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: input for  multiplication-table
 * Return: multiplicatin table n times
 */
void print_times_table(int n)
{
	int rw, cln, d;

	if (!(n > 15 || n < 0))
	{
		for (rw = 0; rw <= n; rw++)
		{
			for (cln = 0; cln <= n; cln++)
			{
				d = (rw * cln);
				if (cln != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (d < 10 && cln != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((d % 10) + '0');
				}
				else if (d >= 10 && d < 100)
				{
					_putchar(' ');
					_putchar((d / 10) + '0');
					_putchar((d % 10) + '0');
				}
				else if (d >= 100 && cln != 0)
				{
					_putchar((d / 100) + '0');
					_putchar((d / 10) % 10 + '0');
					_putchar((d % 10) + '0');
				}
				else
					_putchar((d % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
