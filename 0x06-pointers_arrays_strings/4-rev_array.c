#include "main.h"

/**
 * reverse_array - prints an array in reverse
 * @a: array
 * @n: elements in an array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int b;
	int c;

	for (b = 0; b < n--; b++)
	{
		c = a[b];
		a[b] = a[n];
		a[n] = c;
	}
}
