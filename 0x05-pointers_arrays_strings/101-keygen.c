#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 * Return: 0
 */

int main(void)
{
	int sum;
	char x;

	srand(time(NULL));
	while (sum <= 2645)
	{
		x = rand() % 128;
		sum += x;
		putchar(x);
	}
	putchar(2772 - sum);
	return (0);
}
