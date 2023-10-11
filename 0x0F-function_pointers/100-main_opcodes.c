#include <stdio.h>
#include <stdlib.h>

/**
 * main - checks code
 * @argc: argument number
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int a = 0;
	int b;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (a < b)
	{
		printf("%02x", opc[a] & 0xFF);
		if (a != b - 1)
			printf(" ");
		a++;
	}

	printf("\n");
	return (0);
}
