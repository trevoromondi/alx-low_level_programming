#include <stdio.h>
#include <stdlib.h>

/**
 * isInteger - checks if s is an integer
 * @s: string to check
 * Return: 0 or 1
 */
int isInteger(const char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		if (s[x] < '0' || s[x] > '9')
			return (0);
		x++;
	}
	return (1);
}

/**
 * main - number of coins
 * @argc: int
 * @argv: list
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	int x = 0, coinUsed = 0, coin = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (isInteger(argv[1]))
	{
		x = atoi(argv[1]);
		while (x > 0 && coin <= 4)
		{
			if (x >= coins[coin])
			{
				x -= coins[coin];
				coinUsed++;
			}
			else
				coin++;
		}
	}

	printf("%i\n", coinUsed);
	return (0);
}
