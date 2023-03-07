#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: string to be scanned
 * @needle: a substring to be searched with-in haystack string
 * Return: to the located substring, or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *str1 = haystack;
		char *str2 = needle;

		while (*str1 == *str2 && *str2 != '\0')
		{
			str1++;
			str2++;
		}
		if (*str2 == '\0')
			return (haystack);
	}
	return ('\0');
}
