#include <stdio.h>
/**
 * main - print first fibonacci numbers, starting with 1 and 2
 * Return: 0
 */
int main(void)
{
	int x = 0;
	long int y = 0, z = 1, next;

	while (x < 50)
	{
		next = y + z;
		y = z;
		z = next;
		printf("%lu", next);

		if (x < 49)
		{
			printf(", ");
		}
		x++;
	}
	putchar('\n');
	return (0);
}
