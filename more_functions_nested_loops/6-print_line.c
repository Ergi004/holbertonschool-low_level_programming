#include "main.h"

/**
 * print_line - Prints a line
 * @n: The times the underline is printed
 * Return:
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
