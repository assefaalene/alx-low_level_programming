#include "main.h"
/**
 * string_toupper - a function that changes all lowercase letters
 * of a string to uppercase
 * @hi: string input to be changed
 * return: change lowercase to uppercase
 */
char *string_toupper(char *hi)
	{
	int x = 0;
	int y = 'a' - 'A';

	for (x = 0; hi[x] != '\0'; ++x)
	{
		if (hi[x] >= 'a' && hi[x] <= 'z')
		{
			hi[x] = hi[x] - y;
		}
	}
	return (hi);
}
