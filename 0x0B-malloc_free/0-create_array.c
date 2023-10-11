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
	unsigned int a = 0;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));


	if (array == 0)
		return (NULL);

	while (a < size)
	{
		array[a] = c;
		a++;
	}

	return (ar);
}
