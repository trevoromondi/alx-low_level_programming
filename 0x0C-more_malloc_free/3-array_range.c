#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: size of array
 * @max: char to initialize
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *m;
	int x;

	if (min > max)
		return (NULL);

	m = malloc((max - min + 1) * sizeof(int));

	if (m == 0)
		return (NULL);

	for (x = 0; min + x <= max; x++)
		m[x] = min + x;

	return (m);
}
