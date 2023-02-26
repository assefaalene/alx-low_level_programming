#include "main.h"

/**
 * _abs - computes the absolute valueof an integer
 * @a: input integer
 * Return: absolut value of a
 */
int _abs(int a)
{
	return (a * ((a > 0) - (a < 0)));
}
