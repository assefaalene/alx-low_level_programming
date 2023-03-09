#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 * Return: if a root is not natural number, returns to -1
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - clculates the square root of a natural number
 * @n: input number
 * @i: a root number of n
 * Return: if a root is not natural number, returns to -1
 */

int _sqrt(int n, int i)
{
	int m;

	m = i * i;
	if (m > n)
		return (-1);
	if (m == n)
		return (i);
	return (_sqrt(n, i + 1));
}
