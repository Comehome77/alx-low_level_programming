#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - iterates arrays
 * @array: array
 * @size: size of array
 * @action: pointer to function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a = 0;

	if (action == NULL)
		return;
	if (size <= 0)
		return;
	if (array == NULL)
		return;

	while (a < size)
	{
		action(array[a]);
		a++;
	}
}
