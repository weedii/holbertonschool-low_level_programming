#include "main.h"

/**
 * create_file - function that creates a file
 * @filename:     the name of the file to create
 * @text_content: a text to write in the file
 * Return:        Returns: 1 on success, -1
 */

int create_file(const char *filename, char *text_content)
{
	int fp, len = 0;

	if (filename)
	{
		fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
		if (fp == -1)
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
	return (-1);
}
