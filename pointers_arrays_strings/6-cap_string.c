#include "main.h"
#include <stdio.h>

/**
 * cap_string - function that capitalizes all words of a string.
 * @str: String
 * Return: Always 0.
 */
char *cap_string(char *str)
{
	int i;
	 
	for (i = 0;str[i] != '\0'; i++)
	{
		if (str[i] == ',' ||
				str[i] == ';' ||
				str[i] == '.' ||
				str[i] == '!' ||
				str[i] == '?' ||
				str[i] == '"' ||
				str[i] == '(' ||
				str[i] == ')' ||
				str[i] == '{' ||
				str[i] == '}' )
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			
			}
		}
	}
	return (str);
}
