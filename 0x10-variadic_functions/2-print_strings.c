#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string between strings
 * @n: string number
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int a;
	char *b;

	va_start(valist, n);

	for (a = 0; a < n; a++)
	{
		b = va_arg(valist, char *);

		if (b)
			printf("%s", b);
		else
			printf("(nil)");

		if (a < n - 1)
			if (separator)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
