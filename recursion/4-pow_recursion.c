#include "main.h"

/**
 * _pow_recursion - Entry point
 * @x: Integer
 * @y: Integer
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (_pow_recursion(x, y - 1) * x);
}
