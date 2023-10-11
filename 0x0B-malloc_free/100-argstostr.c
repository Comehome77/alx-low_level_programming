#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments
 * @ac: argument count
 * @av: argument vector
 * Return: pointer of array
 */
char *argstostr(int ac, char **av)
{
	char *aout;
	int a, b, c, d;

	if (ac == 0)
		return (NULL);

	for (a = b = 0; b < ac; b++)
	{
		if (av[b] == NULL)
			return (NULL);

		for (c = 0; av[b][c] != '\0'; c++)
			a++;
		a++;
	}

	aout = malloc((a + 1) * sizeof(char));

	if (aout == NULL)
	{
		free(aout);
		return (NULL);
	}

	for (b = c = d = 0; d < a; c++, d++)
	{
		if (av[b][c] == '\0')
		{
			aout[d] = '\n';
			b++;
			d++;
			c = 0;
		}
		if (d < a - 1)
			aout[d] = av[b][c];
	}
	aout[d] = '\0';

	return (aout);
}
