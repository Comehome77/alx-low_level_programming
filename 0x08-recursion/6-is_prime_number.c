#include "main.h"

/**
* is_prime - give 1 if n is prime
* @n: integer
* @a: integer
* Return: 1 or 0
*/

int is_prime(int n, int a)
{
	if (a <= 1)
		return (1);
	else if (n % a == 0)
		return (0);
	return (is_prime(n, a - 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: integer
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
