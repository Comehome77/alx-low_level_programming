#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int m = 0;

	while (m < 10)
	{
		putchar(m + '0');
		{
		if (m < 9)
		putchar(',');
		putchar(' ');
		}
		m++;
	}
	putchar('\n');
	return (0);
}
