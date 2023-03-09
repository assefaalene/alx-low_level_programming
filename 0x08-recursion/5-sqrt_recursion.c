#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 * Return: if a root is not natural number, returns to -1
 */

int _sqrt_recursion(int n)
{
	int i;

	sqrt = i * i;
	if (sqrt > n)
	{
		return (-1);
	}
	if (sqrt == n)
	{
		return (i);
	}
	return (_sqrt_recursion(n));
}
