#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints product
 * @argc: number
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, c = 0;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;

	printf("%d\n", c);
	return (0);
}
