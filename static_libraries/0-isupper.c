#include "main.h"
#include <ctype.h>

/**
 * _isupper - Checks if the letter is upper
 * @c: the letter to be checked
 * Return: 1 of the letter is upper 0 for anything else
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
