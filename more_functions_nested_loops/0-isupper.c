#include "main.h"
#include <ctype.h>

int _isupper(int c)
{
	if (c <= 90)
	{
		return (1);
	}
	return (0);
}
/**
 * _isupper - Checks if character is uppercase
 * Return: The character being uppercase
 */
