#include "main.h"

/**
 * factorial - calculates factorial
 * @n: int to calculate
 * Return: n factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
