#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - frees a two dimensional
 * @grid: multidimensional array
 * @height: height of array
 * Return: none
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a string
 * @str: string
 * Return: pointer of array
 */
char **strtow(char *str)
{
	char **aout;
	unsigned int a, hi, b, c, d;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (a = hi = 0; str[a] != '\0'; a++)
		if (str[a] != ' ' && (str[a + 1] == ' ' || str[a + 1] == '\0'))
			hi++;
	aout = malloc((hi + 1) * sizeof(char *));
	if (aout == NULL || hi == 0)
	{
		free(aout);
		return (NULL);
	}
	for (b = d = 0; b < hi; b++)
	{
		for (a = d; str[a] != '\0'; a++)
		{
			if (str[a] == ' ')
				d++;
			if (str[a] != ' ' && (str[a + 1] == ' ' || str[a + 1] == '\0'))
			{
				aout[b] = malloc((a - d + 2) * sizeof(char));
				if (aout[b] == NULL)
				{
					ch_free_grid(aout, b);
					return (NULL);
				}
				break;
			}
		}
		for (c = 0; d <= a; d++, c++)
			aout[b][c] = str[d];
		aout[b][c] = '\0';
	}
	aout[b] = NULL;
	return (aout);
}
