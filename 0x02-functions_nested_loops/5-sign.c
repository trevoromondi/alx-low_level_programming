#include "main.h"
/**
 * print_sign - print sign of number
 * @n: parameter to check
 * Return: sign
 */
int print_sign(int n)
{
	int sign;

	if (n > 0)
	{
		sign = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		sign = 0;
		_putchar('0');

	}
	else
	{
		sign = -1;
		_putchar('-');
	}
	return (sign);
}
