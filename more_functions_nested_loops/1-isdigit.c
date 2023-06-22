#include "main.h"
#include <ctype.h>

/**
 * _digit - Checks if the charracter is a digit
 * @c: the character ti be checked
 * Return: 1 of the charracter is a digit 0 for anything else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
