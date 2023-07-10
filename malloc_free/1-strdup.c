#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *_strdup - Duplicate a string
 * @str: The string to be duplicated
 * Return: The array filled
 */
char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	s = malloc((sizeof(char) * 1) + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	while (a < i)
	{
		s[a] = str[a];
		a++;
	}

	s[a] = '\0';
	return (s);
}
