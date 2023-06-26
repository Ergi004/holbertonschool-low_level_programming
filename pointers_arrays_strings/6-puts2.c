#include "main.h"
#include <stdio.h>

/**
 * puts2 - Function that prints every 2 numbers
 * @str: String
 * Return: cvsdvsdv
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
