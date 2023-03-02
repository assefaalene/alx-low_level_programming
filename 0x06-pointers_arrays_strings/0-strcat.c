#include "main.h"

 /**
  * _strcat - a function that concatenates two strings
  * @dest: destination string input
  * @src: source string input
  * Return: dest
  */
char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	for (x = 0; dest[x] != '\0'; x++)
		;
		for (y = 0; src[y] != '\n'; y++)
		{
			dest[x] = src[y];
			x++;
		}
	return (dest);
}
