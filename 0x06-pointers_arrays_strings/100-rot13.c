#include "main.h"

/**
 * rot13 -  creates a string by rot13
 * @s: string
 * Return: s
 */

char *rot13(char *s)
{
	int a, b;
	char *s1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *s2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (s[a] == s1[b])
			{
				s[a] = s2[b];
				break;
			}
		}
	}

	return (s);

}
