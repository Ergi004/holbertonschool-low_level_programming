#include <stdio.h>

#include <time.h>

#include<stdlib.h>

/**
 * main - main function
 * Return: 0 value
 */

int main(void)
{
	char alphabet = 'z';

	while (alphabet <= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}

	putchar('\n');
	return (0);
}

