#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int c;
	int i;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < 0 && b[i] > 1)
		{
			return (0);
		}

	}
	if (b == NULL)
	{
		return (0);
	}
