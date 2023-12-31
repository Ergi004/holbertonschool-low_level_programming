#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @n: String
 * @a: pointer.
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
