#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: pointer to file name
 * @text_content: pointer to file content
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fi, wri, let;

	if (filename == NULL)
		return (-1);

	fi = open(filename, O_WRONLY | O_APPEND);
	if (fi == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
		text_content = "";
	let = 0;
	while (text_content[let] != '\0')
	{
		let++;
	}
	wri = write(fi, text_content, let);
	if (wri == -1)
		return (-1);
	close(fi);
	return (1);
}
