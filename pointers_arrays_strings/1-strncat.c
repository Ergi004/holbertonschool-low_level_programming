#include "main.h"
#include <stdio.h>

/**
 * *_strcat - function that concatenates two strings.
 * @dest: String
 * @src: String
 * @n: Integer
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
	}
	return (dest);
	_putchar('\n');
}
