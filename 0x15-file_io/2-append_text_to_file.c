#include "main.h"

/**
 * append_text_to_file - write a func that append text at the EOF
 * @filename: input
 * @text_content: input
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int x = 0, o, w;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		for (; text_content[x]; x++)
			;
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, x);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
