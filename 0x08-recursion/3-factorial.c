#include "main.h"
/**
 * factorial - function returns the factorial of a given number
 * @n : integer used to return factorial integer value.
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
