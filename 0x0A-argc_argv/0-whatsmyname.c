#include <stdio.h>

/**
 * main - prints name of program
 * @argc: number
 * @argv: array
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
