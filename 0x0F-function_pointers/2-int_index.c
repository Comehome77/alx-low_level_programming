#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for numbers
 * @array: array
 * @size: size of array
 * @cmp: pointer of function
 * Return: indexed no.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);
	while (a < size)
	{
		if (cmp(array[a]))
			return (a);
	a++;
	}
	return (-1);
}
