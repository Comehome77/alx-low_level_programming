#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: size of array argv
 * @argv: An array of size argc
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int (*opera)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	opera = get_op_func(argv[2]);
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (opera == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '%' || argv[2][0] == '/') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", opera(a, b));

	return (0);
}
