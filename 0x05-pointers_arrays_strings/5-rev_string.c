#include "main.h"

/**
 * rev_string - prints reversed string
 * @s: pointer
 * Return: void
 */

void rev_string(char *s)
{
	int lngth, x, hlf;
	char tmp;

	for (lngth = 0; s[lngth] != '\0'; lngth++);

	x = 0;

	hlf = lngth / 2;

	while (hlf--)
	{
		tmp = s[lngth - x - 1];
		s[lngth - x - 1] = s[x];
		s[x] = tmp;
		x++;
	}
}
