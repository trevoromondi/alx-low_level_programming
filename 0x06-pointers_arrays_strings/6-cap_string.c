#include "main.h"

/**
 * *cap_string - capitalize all words
 * @str: pointer
 * Return: str
 */

char *cap_string(char *str)
{
	char sow[] = ",\t;\n; .!?\"(){}";
	int flag, x, y;

	for (x = 0; str[x] != '\0'; x++)
	{
		flag = 0;

		if (x == 0)
		{
			flag = 1;
		}
		else
		{
			for (y = 0; sow[y] != '\0'; y++)
			{
				if (str[x - 1] == sow[y])
				{
					flag = 1;
					break;
				}
			}
		}

		if (flag == 1)
		{
			if (str[x] <= 'z' && str[x] >= 'a')
			{
				str[x] -= ('a' - 'A');
			}
		}
	}
	return (str);
}
