#include "main.h"

/**
 * print_line - Prints a line
 * @n: The times the underline is printed
 * Return:
 */
void print_square(int size)
{
	int i, s;

	for (i = 0; i < size; i++)
	{
		for (s = 0; s < size; s++)
		{
			_putchar('#');
		}
		if (size < 0)
		{
		_putchar('\n');
		}
	}
}
