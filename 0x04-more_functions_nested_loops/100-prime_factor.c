#include <stdio.h>
#include <math.h>
/**
 * main - print largest prime factor
 * Return: 0
 */
int main(void)
{
	unsigned int long i = 612852475143, a = (int) sqrt(i);

	while (1)
	{
		if (i % a == 0)
		{
			printf("%lu \n", i / a);
			break;
		}
		a--;
	}
	return (0);
}
