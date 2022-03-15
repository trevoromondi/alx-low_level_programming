#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natura numbers from n to 98
 * @n number to test
 * Return: no return
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}

	printf("98");
	putchar('\n');
}
