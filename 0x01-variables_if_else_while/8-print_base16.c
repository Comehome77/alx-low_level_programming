#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;
	char letter = 'a';

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	while (letter < 'g')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
