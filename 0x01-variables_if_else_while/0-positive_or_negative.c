#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - C program to check positive negative or zero using simple if statement
 * description: get a random number and print it
 * return: 0
*/
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if  (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else
	{	
		printf("%i is zero\n", n);
	}
}


