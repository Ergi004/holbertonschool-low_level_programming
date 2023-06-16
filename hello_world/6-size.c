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
	float floatType;

	printf("Size of char: %zu byte(s)\n", sizeof(charType));
	printf("Size of int: %zu byte(s)\n", sizeof(intType));
	printf("Size of long int: %zu byte(s)\n", sizeof(lintType));
	printf("Size of long long int: %zu byte(s)\n", sizeof(llintType));
	printf("Size of float: %zu byte(s)\n", sizeof(floatType));

	return (0);
}
