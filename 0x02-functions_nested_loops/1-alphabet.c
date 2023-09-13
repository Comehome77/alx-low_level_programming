#include "main.h"

/**
 * main - prints lowercase alphabets
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
