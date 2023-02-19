#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char C;

	for (C = 'a'; C <= 'z'; C++)
		putchar(C);
	putchar('\n');
	return (0);
}
