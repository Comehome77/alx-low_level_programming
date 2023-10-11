#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to an array
 * @width: width of array
 * @height: height of array
 * Return: pointer or NULL
 */
int **alloc_grid(int width, int height)
{
	int **c;
	int a, b;

	if (width < 1 || height < 1)
		return (NULL);

	c = malloc(height * sizeof(int *));
	if (c == NULL)
	{
		free(c);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		c[a] = malloc(width * sizeof(int));
		if (c[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(c[a]);
			free(c);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			c[a][b] = 0;

	return (c);
}
