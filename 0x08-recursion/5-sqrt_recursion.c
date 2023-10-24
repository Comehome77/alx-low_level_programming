#include "main.h"

/**
 * _sqrt_recur - helps in giving natural square root
 * @n: integer
 * @a: integer
 * Return: result
 */

int _sqrt_recur(int n, int a)
{
	if (a * a == n)
	{
		return (a);
	}
	else if (a * a > n)
	{
		return (-1);
	}
	return (_sqrt_recur(n, a + 1));
}

/**
 * _sqrt_recursion - gives the natural square root of a number
 * @n: integer
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_recur(n, 0));
}

