#include "main.h"

/**
 * len - returns length of a string
 * @s: string
 * Return: length
 */

int len(char *s)
{
	if (*s != '\0')
	{
		return (1 + length(s + 1));
	}
	return (0);
}

/**
 * check - help
 * @s: string
 * @a: integer
 * Return: result
 */

int check(char *s, int a)
{
	if (a <= 0)
	{
		return (1);
	}
	if (*s == *(s + a - 1))
	{
		return (checker(s + 1, a - 2));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int a = length(s);

	return (checker(s, a));
}

