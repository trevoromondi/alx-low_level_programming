#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters
 * @n: int, no of undefined arguments
 * Return: sum of args
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int x, sum = 0;

	va_start(list, n);
	if (n != 0)
		for (x = 0; x < n; sum += va_arg(list, unsigned int), x++)
			;
	va_end(list);

	return (sum);
}
