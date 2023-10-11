#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates strings
 * @s1: string one
 * @s2: string two
 * Return: result or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int a, b, c, d;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (b = 0; s1[b] != '\0'; b++);

	for (a = 0; s2[a] != '\0'; a++);

	result = malloc(sizeof(char) * (a + b + 1));

	if (result == NULL)
	{
		free(result);
		return (NULL);
	}

	for (c = 0; c < b; c++)
		result[c] = s1[c];

	d = a;
	for (a = 0; a <= d; c++, a++)
		result[c] = s2[a];

	return (result);
}
