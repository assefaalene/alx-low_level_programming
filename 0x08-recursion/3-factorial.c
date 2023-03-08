#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number
 * Return: -1 if n < 0, 1 if n == 0, otherwise  n*factoiral(n - 1)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
