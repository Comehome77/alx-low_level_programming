#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string one
 * @src: string two
 * @n: parameter for size of a string
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
