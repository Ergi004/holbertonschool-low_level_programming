#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	long lintType;
	long long llintType;
	char charType;

	printf("Size of char: %zu bytes\n", sizeof(charType));
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of long int: %zu bytes\n", sizeof(lintType));
	printf("Size of long long int: %zu bytes\n", sizeof(llintType));

	return (0);
}
