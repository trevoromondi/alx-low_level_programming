#include "main.h"

/**
 * *_memcpy - copies memory data
 * @dest: destination
 * @src: source
 * @n: max bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}

	return (dest);
}
