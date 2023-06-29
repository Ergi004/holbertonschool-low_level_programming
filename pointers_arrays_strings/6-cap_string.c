#include "main.h"
#include <stdio.h>

/**
 * cap_string - function that capitalizes all words of a string.
 * @str: String
 * Return: Always 0.
 */
char *cap_string(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] > 0 && str[i] < 47 && str[i] != '-')
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			i--;
		}
		if (str[i] > 122 || (str[i] > 57 && str[i] < 65))
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			i--;
		}
	}
	return (str);
}
