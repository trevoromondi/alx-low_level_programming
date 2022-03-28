#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: pointer to put constant
 * @b: constant
 * @n: max bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; n > 0; x++; n--)
	{
		s[x] = b;
	}

	return (s);
}
