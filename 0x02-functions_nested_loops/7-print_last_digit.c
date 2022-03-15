#include "main.h"
/**
 * print_last_digit - get last digit
 * @x : test number
 * Return: 0 or 1
 */
int print_last_digit(int x)
{
	int y;

	if (x < 0)
	{
		y = -1 * (x % 10);
	}
	else
	{
		y = x % 10;
	}
	_putchar(y + '0');
	return (y);
}
