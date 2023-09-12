#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x = sizeof(char);
	int y = sizeof(int);
	int z = sizeof(long int);
	int i = sizeof(long long int);
	int j = sizeof(float);

	printf("Size of a char: %d byte\(s\)\n", x);
	printf("Size of an int: %d byte\(s\)\n", y);
	printf("Size of a long int: %d byte\(s\)\n", z);
	printf("Size of a long long int: %d byte\(s\)\n", i);
	printf("Size of a float: %d byte\(s\)\n", j);
	return (0);
}
