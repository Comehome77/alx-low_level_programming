#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to new space
 * @str: string
 * Return: pointer or NULL
 */
char *_strdup(char *str)
{
	char *c;
	int a, b = 0;

	if (str == NULL)
		return (NULL);

	while (str[b])
		b++;

	c = malloc((sizeof(char) * b) + 1);
	if (c == NULL)
		return (NULL);

	for (a = 0; a < b; a++)
		c[a] = str[a];
	c[a] = '\0';

	return (c);
}
