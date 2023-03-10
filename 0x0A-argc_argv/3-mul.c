#include <stdio.h>
#include "main.h"

/**
 * main - program that multiplies two numbers
 * @argc: number of arguments
 * @argv: number arrays
 * Return: 0 if two numbers recivied, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
		return (0);
	}
		printf("Error\n");
		return (1);
}
