#include "main.h"

/**
 * get_endianness - checks endianness
 * Return: 1 or 0
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *b = (char *)&a;

	if (*b)
		return (1);
	else
		return (0);
}
