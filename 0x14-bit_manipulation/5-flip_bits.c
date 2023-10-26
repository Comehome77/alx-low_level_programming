#include "main.h"

/**
 * flip_bits - gives number of bits to flip
 * @n: beginning number
 * @m: ending number
 * Return: number of flipped bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	int a = 0;

	while (flip)
	{
		if (flip & 1)
			a++;
		flip >>= 1;
	}
	return (a);
}
