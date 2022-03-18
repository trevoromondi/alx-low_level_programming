#include "main.h"
/**
 * print_most_numbers: print the numbers between 0 and 9
 * except 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	char x = 0;

	while (x <= 9)
	{
		if (x != 2 && x != 4)
		{
			_putchar('0' + x);
		}
		x++;
	}
	_putchar('\n');
}
