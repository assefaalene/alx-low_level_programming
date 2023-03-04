#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - computes and prints the sum of all
 * the multiples of 3 or 5 below 2024
 * Retun: Always 0 (Success)
 */
int main(void)
{
	int m;
	int sum;

	for (m = 0; m < 1024; m++)
		if (m % 3 == 0 || m % 5 == 0)
			sum += m;
	printf("%d\n", sum);
	return (0);
}
