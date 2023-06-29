#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @n: String
 * @a: pointer.
 * Return: Always 0.
 */
char *cap_string(char *str)
{
	int i;

	i = 0;
	while  (str[i] != '\0')
	{
		if (str[i] - 1 >= 33 || str[i] - 1 <= 46 || str[i] - 1 >= 59 || str[i] - 1 <= 63)
		{
			i++;
		}
		
		i++;
	}
	return (str);
}
