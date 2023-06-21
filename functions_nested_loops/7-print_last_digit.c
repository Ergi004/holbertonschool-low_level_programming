#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @n: The number to be treated
 * Return: Value of the last digit of number
 */

int print_last_digit(int number)
{
	if (number < 0)
	{
		number = -number;
	}
	return (number % 10);
}
