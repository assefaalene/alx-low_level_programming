#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @c: character
 * @s: string
 * Return: returns to c if character is found, NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return ('\0');
}
