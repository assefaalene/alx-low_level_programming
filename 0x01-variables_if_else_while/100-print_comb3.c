#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints all possible different combinations of two digit
 * Return: 0
 */
int main(void)
{
	int d, t;

	for (d = '0'; d < '9'; d++)
	{
		for (t = d + 1; t <= '9'; t++)
		{
			if (t != d)
			{
				putchar(d);
				putchar(t);
				if (d == '8' && t == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
