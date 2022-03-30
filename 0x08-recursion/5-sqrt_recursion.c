#include "main.h"

/**
 * square - find square root
 * @n: int to find square root of
 * @vl: square root
 * Return: int
 */
int square(int n, int vl)
{
	if (vl * vl == n)
		return (vl);
	else if (vl * vl < n)
		return (square(n, vl + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - natural square root of a number
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
