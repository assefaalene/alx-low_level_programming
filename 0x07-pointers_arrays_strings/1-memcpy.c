#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @src: source of memory address
 * @dest: destinantion of memory address
 * @n: number of bytes to be coppied
 * Return: returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

