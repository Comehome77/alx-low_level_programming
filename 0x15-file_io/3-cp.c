#include "main.h"

/**
 * main - copies a file content to another
 * @argc: argument count
 * @argv: vector count
 * Return: 0
 */

int main(int argc, char *argv[])
	{
	int fi1, fi2, si;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	fi1 =  open(argv[1], O_RDONLY, 0);
	if (fi1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fi2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fi2 == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	while ((si = read(fi1, buf, 1024)) > 0)
	{
		if (write(fi2, buf, si) != si)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (si == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fi1) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fi1), exit(100);
	}
	if (close(fi2) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fi2), exit(100);
	}
	return (0);
}
