#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array
 * @size: size of array
 * @c: initialization
 * Return: pointer of array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int a;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));


	if (array == 0)
		return (NULL);

	for (a = 0; a < size; a++)
		array[a] = c;

	return (array);
}
