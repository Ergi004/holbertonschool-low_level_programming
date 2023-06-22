#include "main.h"

/**
 * print_numbers - Prints numbers
 * @i - Numbers to be printed
 * Return:
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
