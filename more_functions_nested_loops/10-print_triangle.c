#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: The variable with the size value
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = size; i >= 0; i--)
	{
		for (j = 0; j < size; j++)
		{
			if (j < i)
				_putchar(' ');
			else
				_putchar('#');
		}
		if (i != 0)
			_putchar('\n');
	}
}
