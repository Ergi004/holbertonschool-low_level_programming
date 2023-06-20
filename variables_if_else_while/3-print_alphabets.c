#include <stdio.h>

#include <time.h>

#include<stdlib.h>

/**
 * main - main function
 * Return: 0 value
 */

int main(void)
{
	char low;
	char UPP;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	(UPP = 'A'); (UPP++);
		putchar(UPP);
		putchar('\n');
	return (0);
}

