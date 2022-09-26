#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept: char to match
 * Return: cmp
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, cmp = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] > '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				cmp++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}
	return (cmp);
}
