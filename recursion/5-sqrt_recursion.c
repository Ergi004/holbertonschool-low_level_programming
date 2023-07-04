#include "main.h"

/**
 * _sqrt_rec - Entry point
 * _sqrt_recursion - Entry point
 * @n: Integer
 * @root: integer
 * Return _sqrt_rec: Success
 * Return _sqrt_recursion: success
 */
int _sqrt_rec(int n, int root)
{
	if (root * root == n)
	{
		return (root);
	}
	if (root == n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_rec(n, root + 1));
	}
}
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (_sqrt_rec(n, 0));
	}
}
