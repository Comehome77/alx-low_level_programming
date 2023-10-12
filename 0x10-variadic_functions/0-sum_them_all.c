#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of parameters
 * @n: argument number
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int a;
	int b = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (a = 0; a < n; a++)
		b += va_arg(valist, int);

	va_end(valist);

	return (b);
}
