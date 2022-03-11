#include <stdio.h>
/**
 * main - print all single digit numbers of base 10 starting 0
 * Return: 0
 */
int main(void)
{
	char ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
