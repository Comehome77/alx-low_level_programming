#include "main.h"
#include <stdio.h>

/**
 * binary_to_unit - changes binary to unsinged int
 * @b: binary
 * Return: 0 or unsinged int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	unsigned int count = 1;
	int a;

	if (b == NULL)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
		{
			return (0);
		}
		number <<= 1;
		if (b[a] == '1')
		{
			number ^= count;
		}
	}
	return (number);
}
