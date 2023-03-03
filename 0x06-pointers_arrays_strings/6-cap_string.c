#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to be capitalize 
 * Return: capitalize s
 */
char *cap_string(char *s)
	{
	int x, y, w;

	char chars[] = {' ', ',', ';', '.', '!',
			 '?', '"', '(', ')', '{', '}',  '\t', '\n', '\0'};
	x = 32;

	for (y = 0; s[y] != '\0'; y++)
	{
		if (s[y] >= 'y' && s[y] <= 'z')
		{
			s[y] =  s[y] - x;
		}
		x = 0;
		for (w = 0; chars[w] != '\0'; w++)
		{
			if (chars[w] == s[y])
			{
				x = 32;
				break;
			}
		}
	}
	return (s);
}
