#include "main.h"
/**
 * _strncat - a function that concatenates two strings,
 * it will use at most n bytes from src
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: destination string input
 * @src: source string input
 * @n: number of bytes from source string input(src)
 * Return: returns to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	for (x = 0; dest[x] != '\0'; x++)
		;
		for (y = 0; y < n && src[y] != '\0'; y++)
		{
			dest[x] = src[y];
			x++;
		}
	if (y < n)
	{
		dest[x] = '\0';
	}
	return (dest);

}
