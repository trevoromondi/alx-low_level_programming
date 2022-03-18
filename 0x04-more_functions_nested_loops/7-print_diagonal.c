#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: number of times the character \\ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 0, x;

	while (i < n && n > 0)
	{
		x = 0;
		while (x < i)
		{
			_putchar(' ');
			x++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
