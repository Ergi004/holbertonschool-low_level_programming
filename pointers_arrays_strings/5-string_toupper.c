#include "main.h"
#include <stdio.h>

/**
 * *string_toupper - function that changes all lowercase letters to uppercase
 * @str: The string to be changed.
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while  (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
