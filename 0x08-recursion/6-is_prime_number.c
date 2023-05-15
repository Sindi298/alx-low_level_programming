#include "main.h"

/**
 * is_prime_number - chacks if the number is prime
 * @n: takes integer
 * Return: integer
 */
int is_prime_number(int n)
{
	int i = 2;
	if (n <= 2)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if ((n % i) == 0)
	{
		return (0);
	}
	if (i < n)
	{
		i++;
		if ((n % i) != 0)
		{
			return (1);
		}
	}
	return (is_prime_number(n));
}
