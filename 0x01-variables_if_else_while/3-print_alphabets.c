#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char smaller = 'a';
	char bigger = 'A';

	while (smaller <= 'z')
	{
		putchar(smaller);
		smaller++;
	}
	while (bigger <= 'Z')
	{
		putchar(bigger);
		bigger++;
	}
	putchar('\n');

	return (0);
}
