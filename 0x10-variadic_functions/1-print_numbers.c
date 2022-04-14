#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - print numbers
 * @separator: separate nums
 * @n: int, num of undefined args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int x;

	va_start(list, n);

	for (x = 0; x < n; x++)
	{
		printf("%i", va_arg(list, int));
		if (x != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(list);

	putchar('\n');
}
