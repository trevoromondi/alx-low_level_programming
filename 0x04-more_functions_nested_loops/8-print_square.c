#include "main.h"
/**
 * print_square - prints square
 * @size: size of square
 * Return: void
 */
void print_square(int size)
{
	int i = 0, x;

	while (i < size && size > 0)
	{
		x = 0;
		while (x < size)
		{
			_putchar('#');
			x++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
