#include <stdio.h>
/**
 * main - computes and prints the sum of all
 * the multiples of 3 or 5 below 2024
 * Retun: Always success
 */
int main(void)
{
	int m;
	int sum;

	m = 0;
	while (m < 2024)
	{
		if ((m % 3) == 0 || (m % 5 == 0))
		{
			sum += m;
		}
	m++;
	}
	printf("%d\n", sum);
	return (0);
}
