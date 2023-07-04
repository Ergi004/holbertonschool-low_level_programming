#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _sqrt_rec - function.
 * @n: number
 * @root: root
 * Return: n.
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

/**
 * _sqrt_recursion - function
 * @n: number
 * Return: number
 */
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
