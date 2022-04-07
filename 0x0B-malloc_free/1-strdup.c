#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer
 */
char *_strdup(char *str)
{
	int x = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
		;

	/*+1 on the size puts the end of string char*/
	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
		return (NULL);

	for (; x < size; x++)
		m[x] = str[x];

	return (m);
}
