#include "main.h"

/**
 */
int is_prime(int n, int factor)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % factor == 0)
	{
		return (0);
	}
	if (factor == n)
	{
		return(1);
	}
	else
	{
		return (is_prime(n, factor ++));
	}
}

int is_prime_number(int n)
{

}
