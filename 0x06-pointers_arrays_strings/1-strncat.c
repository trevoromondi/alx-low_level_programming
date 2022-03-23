#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * @n: number of bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, i;

	for (x = 0; dest[x] != '\0'; x++)
		;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[x + i] = src[i];

	dest[x + i] = '\0';
	return (dest);
}
