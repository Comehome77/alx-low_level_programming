#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer file name
 * @text_content: pointer to file content
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fi;
	int let;
	int wri;

	if (!filename)
		return (-1);

	fi = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fi == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (let = 0; text_content[let]; let++)
		;

	wri = write(fi, text_content, let);

	if (wri == -1)
		return (-1);

	close(fi);

	return (1);
}
