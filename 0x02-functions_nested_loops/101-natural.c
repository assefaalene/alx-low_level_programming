#include <stdio.h>
/**
 * main - computes and prints the sum of all
 * the multiples of 3 or 5 below 1024
 * Retun: Always success
 */
int main(void)
{
	int m;
	int sum;

	for (m = 0; m < 1024; m++)
	{
		if ((m % 3) == 0 || (m % 5 == 0))
		{
			sum += m;
		}
	}
	printf("%d\n", sum);
	return (0);
}
