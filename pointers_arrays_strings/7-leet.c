#include "main.h"
#include <stdio.h>

/**
 * leet - function that encodes a string into 1337
 * @str: String
 * Return: Always 0.
 */
char *leet(char *str)
{
	int i, j;
	char letter[] = "aAeEoOttTlL";
	char number[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letter[j] != '\0'; j++)
		{
			if (str[i] == letter[j])
			{
				str[i] = number[j];
			}
		}
	}
	return (str);
}
