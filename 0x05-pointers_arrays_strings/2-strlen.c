#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer
 * Return: x
 */

int _strlen(char *s)
{
	int x = 0;

	while (s[x])
		x++;
	return (x);
}
