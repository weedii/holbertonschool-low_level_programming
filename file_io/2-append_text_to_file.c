#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename:     the name of the file to create
 * @text_content: a text to write in the file
 * Return:        Returns: 1 on success, -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, len;

	fp = open(filename, O_WRONLY | O_APPEND);
	if (!fp)
		return (-1);

	if (!text_content)
	{
		close(fp);
		return (1);
	}

	for (len = 0; text_content[len]; len++)
		;

	write(fp, text_content, len);
	close(fp);
	return (1);
}
