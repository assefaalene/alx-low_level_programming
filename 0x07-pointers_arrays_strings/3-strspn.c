#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial substring(first string)
 * @accept: substring(second string)
 * Return: number of bytes in S only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			else if (accept[j] == '\0')
				return (count);
		}
	}
	return (count);
}
