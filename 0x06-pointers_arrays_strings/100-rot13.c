#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * @r: array pointer
 * Return: r
 */

char *rot13(char *r)
{
	int x, y;
	char i[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char o[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; r[x] != '\0'; x++)
	{
		for (y = 0; y < 54; y++)
		{
			if (r[x] == i[y])
			{
				r[x] = o[y];
				break;
			}
		}
	}
	return (r);
}
