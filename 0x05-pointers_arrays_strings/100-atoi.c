#include "main.h"

/**
 * _atoi - converts a string into an integer
 * @s: char string type
 * Return: int converted
 */

int _atoi(char *s)
{
	int sign = 1, resp = 0, fNum, x;

	for (fNum = 0; !(s[fNum] >= 48 && s[fNum] <= 57); fNum++)
	{
		if (s[fNum] == '-')
		{
			sign *= -1;
		}
	}

	for (x = fNum; s[x] >= 48 && s[x] <= 57; x++)
	{
		resp *= 10;
		resp += (s[x] - 48);
	}

	return (sign * resp);
}
