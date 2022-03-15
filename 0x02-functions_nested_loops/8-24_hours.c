#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: void
 */
void jack_bauer(void)
{
	int x1;
	int x2;
	int y1;
	int y2;
	int z = 9;

	x2 = 0;
	while (x2 <= 2)
	{
		if (x2 == 2)
		{
			/*Add restrain to 23h*/
			z = 3;
		}
		x1 = 0;
		while (x1 <= z)
		{
			y2 = 0;
			while (y2 <= 5)
			{
				y1 = 0;
				while (y1 <= 9)
				{
					_putchar('0' + x2);
					_putchar('0' + x1);
					_putchar(':');
					_putchar('0' + y2);
					_putchar('0' + y1);
					_putchar('\n');
					y1++;
				}
				y2++;
			}
			x1++;
		}
		x2++;
	}
}
