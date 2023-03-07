#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial substring(first string)
 * @accept: substring(second string)
 * Return: number of bytes in S only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int count = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{	
		if (s[i] == accept[i])
			count++;
	}
		return (count);
}
