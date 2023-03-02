#include "main.h"
/**
 * _strncpy - a function that copies a string
 * @dest: destination string input
 * @src: source string input
 * @n: number of bytes to copy
 * Return: coppied to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (src[x])
		y++;
	for (x = 0; src[x] && x < n; x++)
		dest[x] = src[x];
			for (x = y; x < n; x++)
			dest[x] = '\0';
			return (dest);
}
