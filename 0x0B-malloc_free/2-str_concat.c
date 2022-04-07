#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - find string length
 * @s: string
 * Return: int
 */
int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}

/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int sz1, sz2, x;
	char *m;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	sz1 = _strlen(s1);
	sz2 = _strlen(s2);
	m = malloc((sz1 + sz2) * sizeof(char) + 1);

	if (m == 0)
		return (0);

	for (x = 0; x <= sz1 + sz2; x++)
	{
		if (x < sz1)
			m[x] = s1[x];
		else
			m[x] = s2[x - sz1];
	}
	m[x] = '\0';
	return (m);
}
