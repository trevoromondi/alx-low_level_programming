#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: char string
 * @src: char string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int x = -1;

	do {
		x++;
		dest[x] = src[x];
	} while (src[x] != '\0');

	return (dest);
}
