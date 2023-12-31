#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Function that converts binary to units
 * @b: input
 * Return: n
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		n = n << 1;
		if (b[i] == '1')
		{
			n += 1;
		}
	}
	return (n);
}
