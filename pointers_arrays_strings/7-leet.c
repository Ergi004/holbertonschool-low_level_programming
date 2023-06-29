#include "main.h"
#include <stdio.h>

/**
 * leet - function that encodes a string into 1337
 * @str: String
 * Return: Always 0.
 */
char *leet(char *s)
{
	int i, j;
	char letter[] = "aAeEoOtlLtT";
	char number[] = "4433001177";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letter[j] != '\0'; j++)
		{
			if (s[i] == letter[j])
			{
				s[i] = number[j];
			}
		}
	}
	return (s);
}
