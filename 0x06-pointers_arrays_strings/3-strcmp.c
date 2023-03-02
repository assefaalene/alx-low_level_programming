#include "main.h"
/**
 * _strcmp -  a function that compares two strings
 * @s1: string input one
 * @s2: string input two
 * Return: if s1 & s2 are equal, return 0, otherwise return other number
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
		if (*s1 == *s2)
	{
		return (0);
	}
	return (*s1 - *s2);
}
