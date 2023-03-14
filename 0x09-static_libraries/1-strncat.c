#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	return strcat(dest, src, n);
}
