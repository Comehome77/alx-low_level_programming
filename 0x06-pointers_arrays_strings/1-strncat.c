#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string one
 * @src: string two
 * @n: parameter for size of string
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0' && n > 0)
	{
		dest[a] = src[b];
		a++;
		b++;
		n--;
	}

	dest[a] = '\0';
	return (dest);
}
