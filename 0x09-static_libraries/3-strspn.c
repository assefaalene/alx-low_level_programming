#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	return strspn(s, accept);
}
