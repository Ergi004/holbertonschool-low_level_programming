#include "main.h"

/**
 * print_line - Prints a line
 * @n: The times the underline is printed
 * Return:
 */
void print_diagonal(int n)
{
	int i;
	int s;
	
	for (i = 1; i <= n; i++)
	{
		for (s = 1; s <= n; s++)
		{
			_putchar(' ');
			_putchar('/');
		}
		_putchar('\n');
	}
}
