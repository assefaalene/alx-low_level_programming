#include "main.h"
/**
 * string_toupper - changes all lowercase letters to uppercases
 * @s: string input to be changed
 * Return: to uppercases
 */
char *string_toupper(char *s)
	{
	int x = 0;
	int y = 'a' - 'A';

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] >= 'a' && s[x] <= 'z')
		{
			s[x] = s[x] - y;
		}
	}
	return (s);
}
