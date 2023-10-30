#include "main.h"

/**
  * read_textfile - reads text file
  * @filename: pointer of file name
  * @letters: number of letters
  * Return: number of letters
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fi, re, wri;
	char *buf;

	if (filename == NULL)
		return (0);

	fi = open(filename, O_RDONLY);
	if (fi == -1)
		return (0);
	buf = malloc(sizeof(char) * letters + 1);
	if (buf == NULL)
		return (0);
	re = read(fi, buf, letters);
	if (re == -1)
		return (0);

	buf[letters] = '\0';

	wri = write(STDOUT_FILENO, buf, re);
	if (wri == -1)
		return (0);

	close(fi);
	free(buf);
	return (wri);
}
