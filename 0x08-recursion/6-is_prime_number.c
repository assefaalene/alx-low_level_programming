#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - returns if input is a prime number
 * @n: input number to be checked
 * Return: 1 if a prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - checks if an input is a prime number
 * @n: input number to be checked
 * Return: 1 if input number is a prime, 0 otherwise
 */

int check_prime(int n, int i)
{
	if (n < 2)
		return (0);
	if (n % i == 0 && n >= 2) 
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
