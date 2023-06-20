#include <stdio.h>

#include <time.h>

#include<stdlib.h>

/**
 * main - main function
 * Return: 0 value
 */

int main(void)
{
	int d;
	char low;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	for (low = 'a'; low <= 'f'; low++)
	{
		putchar(low);
	}
	putchar('\n');
	return (0);
}

