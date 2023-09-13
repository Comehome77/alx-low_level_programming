#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
