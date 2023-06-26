#include "main.h"
/**
 * print_rev - function that prints a string,in reverse,followed by a new line
 * @s: string
 * Return: adfasdfa
 */
void rev_string(char *s)
{
	int start;
	int end;
	int len;
	int tmp;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	start = 0;
	end = len - 1;
	while (start < end)
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;
		start++;
		end--;
	}
}
