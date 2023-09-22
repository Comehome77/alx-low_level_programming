#include "main.h"
#include <stdio.h>

/**
* print_buffer - prints a buffer
 * @b: buffer
 * @size: the size of the memory
 */
void print_buffer(char *b, int size)
{
	int a, d, c;

	for (a = 0; a < size; a += 10)
	{
		printf("%08x: ", a);
		for (d = 0; d < 10; d++)
		{
			(a + d < size) ? printf("%02x", b[a + d])
				: printf("  ");
			(d % 2) ? printf(" ") : 0;
		}
		for (c = 0; c < 10; c++)
			(a + c < size) ? printf("%c", (b[a + c] >= 32 &&
				b[a + c] <= 126) ? b[a + c] : '.') : 0;

		printf("\n");
	}

	(size <= 0) ? printf("\n") : 0;
}
