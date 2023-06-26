#include "main.h"
#include <stdio.h>

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: String
 * Return: cvsdvsdv
 */
void puts_half(char *str)
{
	int l;
	int j;
	
	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	for (j = (l +1) / 2; j < l; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}	
