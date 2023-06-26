#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 * @str: string
 * Return: adfasdfa
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
