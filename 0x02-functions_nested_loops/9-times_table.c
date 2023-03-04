#include "main.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * rw = row
 * cln = column
 * d = digits of 9 times table result
 * Return: times table
 */
void times_table(void)
{
	int rw;
	int cln;
	int d;

	for (rw = 0; rw <= 9; rw++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (cln = 1; cln <= 9; cln++)
		{
			d = (rw * cln);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (cln < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
