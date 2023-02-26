#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * main - main block
 * Description: Find and print the largest prime factor of the number
 * 612852475143
 * Return: 0
 */

int main(void)
{
	int k;
	long n = 612852475143;

	for (k = (int) sqrt(n); k > 2; k++)
	{
		if (n % k == 0)
		{
			printf("%d\n", k);
			break;
		}
	}
	return (0);
}
