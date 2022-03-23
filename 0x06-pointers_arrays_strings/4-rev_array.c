#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: pointer
 * @n: array length
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x = 0, hlf;

	for (hlf = n / 2; hlf > 0; hlf--, x++)
	{
		a[n - x - 1] += a[x];
		a[x] = a[n - x - 1] - a[x];
		a[n - x - 1] = a[n - x - 1] - a[x];
	}
}
