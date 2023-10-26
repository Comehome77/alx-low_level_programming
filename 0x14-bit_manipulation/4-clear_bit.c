#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets value of bit to 0
 * @n: number
 * @index: position
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int number = 1;

	number <<= index;
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	(*n) = (*n) & ~(number);
	return (1);
}
