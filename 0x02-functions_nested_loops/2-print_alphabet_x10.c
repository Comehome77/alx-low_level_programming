#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int line;
	char alpha;

	for (line = 0; line <= 10; line++)
	{

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
	}
}
