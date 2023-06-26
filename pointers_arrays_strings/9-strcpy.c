#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function that copies the string pointed to by src, including the terminating null byte
 * @a: String
 * Return: cvsdvsdv
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	dest[i + 1] = '\0';
	return (dest);
}
