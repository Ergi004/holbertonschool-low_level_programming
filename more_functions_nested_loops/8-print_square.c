#include "main.h"

/**
 * print_square - Prints a square
 * @size: The variable with the size value
 * Return: sdasdas
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
		if (size <= 0)
		{
		_putchar('\n');
		}
		_putchar('\n');
	}
}
