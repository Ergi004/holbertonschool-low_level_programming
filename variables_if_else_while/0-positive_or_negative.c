#include <stdio.h>

#include <time.h>

#include<stdlib.h>

/**
 * main - main function
 * Return: 0 value
 */

int main(void)

{
	int n = 98;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}



