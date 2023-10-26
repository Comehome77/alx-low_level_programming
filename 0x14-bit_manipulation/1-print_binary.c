#include "main.h"

/**
 * print_binary - prints binary forms of numbers
 * @n: unsigned long int
 * Return: none
 */

void print_binary(unsigned long int n)
{
	unsigned long int number;
	int a;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (number = n, a = 0; (number >>= 1) > 0; a++)
		;

	for (; a >= 0; a--)
	{
		if ((n >> a) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
