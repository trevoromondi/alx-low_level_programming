#include <stdio.h>
#include <stdlib.h>
/**
 * main - sum of all the multiplesof 3 or 5 below 1024
 * Return: 0
 */
int main(void)
{
	int x = 0;
	int sum = 0;

	while (x < 1024)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			sum += x;
		}
		x++;
	}
	printf("%i\n", sum);
	return (0);
}
