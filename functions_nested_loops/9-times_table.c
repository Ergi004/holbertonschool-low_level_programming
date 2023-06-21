#include "main.h"

/**
 * times_table - Prints the 0 times table, starting with 0
 * Return: empty output
 */

void times_table(void)

{
	int result;
	int j, i;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if (result >= 10)
			{
				_putchar('0' + result / 10);
			}
			_putchar('0' + result % 10);
			
			if (j != 9)
			{
				_putchar(',');
			}
			if (result >= 10)
			{
				_putchar(' ');
			}
			else if (result < 10 && j != 9)
			{
				_putchar(' ');
			}

		}
	_putchar('\n');
	}
}
