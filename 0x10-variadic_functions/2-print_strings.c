#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: separate strings
 * @n: no of undefined args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int x;
	char *c;

	va_start(list, n);

	for (x = 0; x < n; x++)
	{
		c = va_arg(list, char*);
		if (c != NULL)
			printf("%s", c);
		else
			printf("(nil)");

		if (x != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(list);

	putchar('\n');
}
